#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,n,i;
    printf("How many numbers:");
    scanf("%d",&n);
    ptr=(int*) malloc(n *sizeof(int)); //allocate
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
     scanf("%d",ptr+i);
     printf("The elements are:");
     for(i=0;i<n;i++)
     printf("%d\t",*(ptr+i));

}
