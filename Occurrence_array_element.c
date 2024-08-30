#include<stdio.h>
int main()
{
    int arr[100];// Accept 100 array elements
    int n,no,ctr=0;//n and no declaration and ctr=0 is initialisation
    printf("Enter the number of elements in Array:");
    scanf("%d",&n); // accept how many  n elements as integer

    printf("Enter the elements of array:");
    for(int i=0;i<n;i++)// enter array elements loop wisw
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of count occurrence:");
    scanf("%d",&no);
    for(int i=0;i<n;i++)
    {
        if (arr[i]==0)
        {
            ctr++;
        }
    }
    printf("The number %d occurs %d times in array:\n",no,ctr);
    return 0;
}