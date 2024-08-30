#include<stdio.h>
int linear_search(int A[],int n,int key)
{

    int i=0;
    for(i=0;i<n;i++)
    {
        if(A[i]==key)
            return 1;
    }
    return -1;
}
void accept(int A[],int n)
{

    int i;
    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&n);
}
int main()
{
    int A[20],i,n,key,find;
    printf("How many numbers:");
    scanf("%d",&n);
    accept(A,n);
    printf("Enter the key to be search:",key);
    scanf("%d",&key);
    find=linear_search(A,n,key);
    if(find=key)
    printf("%d Is found in an Array:\n",key);
    else
        printf("%d is not found in an array:",key);
}
