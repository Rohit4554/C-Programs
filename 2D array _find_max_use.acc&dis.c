#include<stdio.h>
int main()
{
    int arr[20],n,i;
    void accept(int a[20],int n);
    void display(int a[20],int n);
    int maximum(int a[20],int n);

    printf("How many numbers:");
    scanf("%d",&n);
    accept(arr,n);
    display(arr,n);
    printf("Enter the numbers:");
    scanf("%d",n);
    printf("The maximum number is: %d",maximum(arr,n));

}
void accept(int a[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display(int a[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",a[20]);
}
int maximum(int a[20],int n)
{
    int i,max=a[20];
    for(i=0;i<n;i++)
    if(a[i]>max)
    max=a[i];
    return max;
}