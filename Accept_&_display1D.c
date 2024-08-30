#include<stdio.h>
int  main()
{
    int a[10],i;
    printf("Enter the 10 array elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The 10 Array elements are:\t");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);

    }
    return 0;
    
}