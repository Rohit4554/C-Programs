#include<stdio.h>
#include<stdlib.h>
int insertionsort(int a[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int current=a[i];
        j=i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=current;
    }
}
int rando(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    a[i]=rand()%100;
}
void main()
{
    int i,j,n;
    int a[23];
    printf("How many numbers:");
    scanf("%d",&n);
    rando(a,n);
    printf("The array is:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    insertionsort(a,n);
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}