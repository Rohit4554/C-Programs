#include<stdio.h>
int isEven(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int num[n],i; // function name
    for(i=0;i<n;i++)
    {
        printf("Enter %d number :\n",i+1);
        scanf("%d",&num[i]);

    }
    for(int i=0;i<n;i++)
    {
        if(isEven(num[i]))
        {
            printf("%d is EVEN:\n",num[i]);

        }else{
            printf("%d is ODD:\n",num[i]);
        }
    }
    return 0;
}