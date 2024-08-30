#include<stdio.h>
#include<string.h>
struct employee
{

    int id;
    char name[20];
    float salary;
};
int main()
{
    int i;
    struct employee emp[5];
    printf("Enter the records of 5 Employee:\n");
    for(i=0;i<5;i++)
    printf("\nEnter the employee ID");
    scanf("%d",&emp[i].id);
    printf("Enter the name of the employees:\n");
    scanf("%c",emp[i].name);
    printf("Enter the salary of employees:\n");
    scanf("%f",emp[i].salary);
}
