
/*create a structure item (item number,item name,rate,qty,total).Accept a details of n item (calculate total as qty*rate ).aND DISPLAY the bill in the following formate> */
#include<stdio.h>

typedef struct item
{
    int number;
    char name[20];
    float rate;
    float quentity;
    float total;
}item;
void main()
{
    int n,i,total_bill=0,i_d;
    item details[20];
    printf("How many item do you want to buy:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter item no., Name,rate,quantity%d:",i+1);
        scanf("%d%s%f%f%f",&details[i].number,details[i].name,&details[i].rate,&details[i].quentity);
        details[i].total=details[i].quentity*details[i].rate;
        total_bill=total_bill+details[i].total;

    }
     printf("Item details:\nid\t\tName\t\trate\t\tquantity\ttotal\n");
     for(i=0;i<n;i++)
     {
         printf("%d\t\t%s\t\t%f\t\t%f\t\t%f\n\n",details[i].number,details[i].name,details[i].rate,details[i].quentity,details[i].total);
     }
     printf("\t\t\t\t\tTotal bill:%f",total_bill);
}
