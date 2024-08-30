#include<stdio.h>
#include<stdlib.h>
int lin_search(int A[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (A[i]== key)
        return 1;
    }
    return -1;
}
void accept(int A[],int n)
{
    int i;
    printf("\nEnter the %d elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    
}
int main()
{
    int A[20], i,key,n,pos;
    printf("How many elements in array:");
    scanf("%d",&n);
    accept(A,n);
    printf("\nEnter the key:");
    scanf("%d",&key);
    pos=lin_search(A,n,key);
    if(pos==-1)
    printf("\n%d is not found in array:",key);
    else
    printf("\n%d is found in array at position %d",key,pos);

}