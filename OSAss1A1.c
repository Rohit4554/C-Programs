
#include<stdio.h>
#include<stdlib.h>

int request[5],max[5][5],Need[5][5],avail[5],finish[5]={0},work[5],safe[5]={0},proc,nor;
int alloc[5][5];
int max[5][5];

void accept_matrix(int a[][5],int n,int m)
{
    int i,j;
     for(i= 0;i<n;i++)
     {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
}
void accept_available(int m)
{
    int i;
    for(i=0;i<m;i++)
     {
        scanf("%d",&avail[i]);
     }
}
void find_need(int a[][5],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            Need[i][j]=max[i][j]-alloc[i][j];
        }
    }
}

void accept_req(int n,int m)
{
    int i;
    printf("Enter Process Number:");
    scanf("%d",&proc);
    printf("Enter Resource Request for process (%d) :",proc);
    for(i=0;i<m;i++)
    {
        scanf("%d",&request[i]);
    }
}

int compare_need(int p)
{
    int i,j,flag=0;
    for(j=0;j<nor;j++)
    {
        if(Need[p][j]>work[j])
        {
            flag=1;
            break;
        }
        if(flag==0)
         return p;
         return -1;
    }
}

void safety_algo(int n,int m)
{
    int i,j,k,l=0,flag,pno,over=0,canProceed;
    for ( i = 0; i < n; i++)
    {
         work[i]=avail[i];
    }
    while (!over)
    {
        flag=0;
        for ( i = 0; i < n; i++)
        {
            if (finish[i]==0)
            {
                canProceed=1;
            for ( i = 0; i <m ; i++)
            {
               if(Need[i][j]>work[j])
               {
                canProceed=0;
                break;
               }
                
            }
            if(canProceed)
            {
                for(k=0;k<m;k++)
                {
                    work[k] += alloc[i][k];
                }
                finish[i]=1;
                safe[l++]=i;
                flag=1;
            }
            
            }
            
        }
        if(!flag)
        {
            for(i=0;i<n;i++)
            {
                if(finish[i]==0)
                {
                    printf("System is Unsafe\n");
                     exit(1);
                }
            }
            over=1;
        }
    
    }
    printf("Safe Sequence is :");
    for(i=0;i<l;i++)
    {
        printf("P%d\t",safe[i]);
    }
    printf("\n");
    
}

void resource_req(int n,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        if(request[i] > Need[proc][i])
    
    {
    printf("Error: Process exceed its maximum demand :");
    //exit(1);
}
 }
 for  (i = 0; i < m; i++)
 {
    if(request[i] > avail[i])
    {
        printf("Error.. Process Must wait Resources are not available.\n");
        exit(1);
    }
 }
 for(i=0;i<m;i++)
 {
    avail[i] = avail[i] - request[i];
    alloc[proc][i] = alloc[proc][i] + request[i];
    Need[proc][i] = Need[proc][i] - request[i];
 } 
 safety_algo(n,m);
}

void bankers_algo(int n,int m)
{
    resource_req(n,m);
}
void display_mat(int a[][5],int n,int m)
{
    int i,j;
    //printf("\nAllocation\tMax\t\tNeed\n");
      for(i=0;i<n;i++)
       {
        for( j=0;j<m;j++)
        {
          printf("%d\t",a[i][j]);
        }
        printf("\n");
}
}
int main()
{
    int ch=0,n,m;
    printf("Enter Number of processes..:");
    scanf("%d",&n);

    printf("Enetr the number of resources:");
    scanf("%d",&m);
         int i;
         while (ch!=8)
         {
           printf("\nOptions\n");
           printf("\n1.Accept Allocation:\n");
           printf("2.Accept Max\n");
           printf("3.Calculate need\n");
           printf("4.Accept Available\n");
           printf("5.display Matrix.\n");
           printf("6.Accept Request and apply Bankers Algorithm\n");
           printf("7.display the Safe Sequence\n");
           printf("Exit....!\n");
           printf("\nEnetr The option.:");
           scanf("%d",&ch);
         
        switch (ch)
           {
           case 1:
               printf("Enter Allocation Matrix:\n");
               accept_matrix(alloc,n,m);
               break;
            case 2:printf("Enter Msx Mstrix:\n");
                accept_matrix(max,n,m);
                break;
            case 3: 
                 printf(" calculated Need Matrix:\n");
                 find_need(Need,n,m);
                 display_mat(Need,n,m);
                  break;
            case 4:
                    printf("Enter Available Matrix:\n");
                    accept_available(m);
                    for(i=0;i<m;i++)
                    {
                        printf("%d\t",avail[i]);
                    }
                    break;
            case 5:
                  printf("Allocation Matrix:\n");
                   display_mat(alloc,n,m);

                   printf("Max MAtrix:\n");
                   display_mat(max,n,m);

                   printf("Need Matrix:\n");
                   display_mat(Need,n,m);

                   printf("Available Array:\n");
                   for(i=0;i<m;i++)
                   printf("%d\t",avail[i]);    
                     break;
            case 6:
                 accept_req(n,m);
                 bankers_algo(n,m);
                 break;
            case 7: 
                 safety_algo(n,m);
                 break;
                 default : printf("Invalid Option..!\n");
                  break;

    }

} while(ch!=8);
}
