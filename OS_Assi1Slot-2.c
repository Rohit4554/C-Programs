#include <stdio.h>
#include <stdlib.h>

int allocation[5][5], max[5][5], Need[5][5], available[5], work[5], Finish[5], Safe[5];
int m, n;

void accept_matrix(int a[][5])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
 void accept_available()
{
    int i;
    for (i = 0; i < m; i++)
    {
        scanf("%d", &available[i]);
    }
}

void need()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            Need[i][j] = max[i][j] - allocation[i][j];
        }
    }
}

void display()
{
    int i, j;
    printf("\nAllocation\t\tMax\t\t\tNeed\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", allocation[i][j]);
        printf("\t\t\t");
        for (j = 0; j < m; j++)
            printf("%d ", max[i][j]);
        printf("\t\t\t");
        for (j = 0; j < m; j++)
            printf("%d ", Need[i][j]);
        printf("\n");
    }
    printf("Available: ");
    for (i = 0; i < m; i++)
    {
        printf("%d ", available[i]);
    }
    printf("\n");
}

void accept_request(int Request[])
{
    int i, proc;
    printf("\nEnter process number: ");
    scanf("%d", &proc);
    printf("Enter resource request for process %d: ", proc);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &Request[i]);
    }
}

int safety_algorithm()
{
    int i, j, k, l = 0, flag, pno;
    int over = 0;

    // Initialize work and Finish
    for (i = 0; i < m; i++)
        work[i] = available[i];

    for (i = 0; i < n; i++)
        Finish[i] = 0;

    while (!over)
    {
        over = 1;
        for (i = 0; i < n; i++)
        {
            if (Finish[i] == 0)
            {
                flag = 1;
                for (j = 0; j < m; j++)
                {
                    if (Need[i][j] > work[j])
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                {
                    for (k = 0; k < m; k++)
                        work[k] += allocation[i][k];
                    Finish[i] = 1;
                    Safe[l++] = i;
                    over = 0;
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (Finish[i] == 0)
        {
            printf("System is unsafe\n");
            return 0;
        }
    }

    printf("System is safe. Safe sequence is: ");
    for (i = 0; i < n; i++)
        printf("P%d ", Safe[i]);
    printf("\n");
    return 1;
}

void resource_request_algorithm()
{
    int i, proc, Request[5];
    accept_request(Request);

    for (i = 0; i < m; i++)
    {
        if (Request[i] > Need[proc][i])
        {
            printf("Error: Process exceeds its maximum claim.\n");
            return;
        }
    }

    for (i = 0; i < m; i++)
    {
        if (Request[i] > available[i])
        {
            printf("Process must wait, resources not available.\n");
            return;
        }
    }

    for (i = 0; i < m; i++)
    {
        available[i] -= Request[i];
        allocation[proc][i] += Request[i];
        Need[proc][i] -= Request[i];
    }

    if (!safety_algorithm())
    {
        for (i = 0; i < m; i++)
        {
            available[i] += Request[i];
            allocation[proc][i] -= Request[i];
            Need[proc][i] += Request[i];
        }
    }
}

int main()
{
    int ch;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter the number of resources: ");
    scanf("%d", &m);

    do
    {
        printf("\nMenu:\n");
        printf("1. Accept Allocation\n");
        printf("2. Accept Max\n");
        printf("3. Calculate Need\n");
        printf("4. Accept Available\n");
        printf("5. Display Matrix\n");
        printf("6. Resource Request Algorithm\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("\nEnter Allocation Matrix:\n");
                accept_matrix(allocation);
                break;
            case 2:
                printf("\nEnter Max Matrix:\n");
                accept_matrix(max);
                break;
            case 3:
                need();
                printf("\nNeed is calculated. Enter the next option:\n");
                break;
            case 4:
                printf("\nEnter Available Matrix:\n");
                accept_available();
                break;
            case 5:
                printf("\nDisplay Matrix:\n");
                display();
                break;
            case 6:
                resource_request_algorithm();
                break;
            case 7:
                printf("\nExit\n");
                break;
            default:
                printf("Invalid Option!\n");
                break;
        }
    } while (ch != 7);

    return 0;
}
