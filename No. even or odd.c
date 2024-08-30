/*Check the number is even or odd*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if(n%2==0)
    printf("The number %d is EVEN:",n);
    else
    printf("The number is ODD:"n);
}