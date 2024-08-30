#include<stdio.h>

void generate(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
        A[i]=rand()%100;

}
void bubblesort(int A[],int n)
{
    int pass,i,temp;
    for(pass=1;pass<n;pass++)
    {
         for(i=0;i<n;i++)
         if(A[i]<A[i]+1)
         {
            temp=A[i];
            A[i]=A[i=1];
            A[i+1]=temp;
         }
    }
}
void main()
{
     int A[20],i,n,tempp;
     printf("How many numbers:");
     scanf("%d",&n);
     generate(A,n);
     printf("Before sort=\n");
     for(i=0;i<n;i++)
     printf("%d\t",&A[i]);
     printf("\nAfter sort:\n");
     printf("%d\t",&A[i]);
}