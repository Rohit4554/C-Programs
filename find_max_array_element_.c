#include <stdio.h>

void accept(int arr[20], int n);
void display(int arr[20], int n);
int maximum(int arr[20], int n);

int main()
{
    int arr[20];
    int n;
    printf("How many numbers: ");
    scanf("%d", &n);

    accept(arr, n);
    display(arr, n);
    printf("The maximum number is %d\n", maximum(arr, n));
    return 0;
}

void accept(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int n)
{
    printf("Array Elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int maximum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}


