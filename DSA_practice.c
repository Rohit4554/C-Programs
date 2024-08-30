#include<stdio.h>
#include<stdlib.h>
int lin_search(int a[],int n ,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        return i;
    }
    return -1;
}
void accept(int a[],int n)
{
    int i;
    printf("\nEnter the %d elements in array:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int main()
{
    int i,a[10],n,key,pos;
    printf("How many elements in array:");
    scanf("%d",&n);
    printf("\nEnter the key you want to search:");
    scanf("%d",&key);
    pos=lin_search(a,n,key);
    if(pos==-1)
    printf("\n%d key is not found in array:",key);
    else
    printf("\n%d key is found in array at position: %d ",key,pos);

}