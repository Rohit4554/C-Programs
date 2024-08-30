#include<stdio.h>
int main()
{
    int a[3][4],i,j,r,c;
    printf("Enter how many rows and column in Matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d%d",&a[i][j]); 
        }
    }
    printf("The elements in 2D arrays are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d%d",a[i][j]);
        }
        printf("\n");

    }
     return 0;
    
}