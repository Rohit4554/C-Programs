/*Write a program to accept details of n employees (id, name, salary).
Display all the details. Also, search for an employee by name.*/

#include<stdio.h>
struct employee{
  int id;
  char name;
  int salary;
};
void main()
{

    int i,n;
    printf("Enter the numbers of employees:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     printf("\nemployee%d\n",i+1);

     printf("Enter the id:\n");
     scanf("%d",emplpoyee[i].id);
     printf("Enter the name:\n");
     scanf("%s",employee[i].name);
     printf("Enter the salary of employee:\n");
     scanf("%d",employee[i].salary);
    }
    printf("\nDetails of employees:");
    for(i=0;i<n;i++)
    {
        printf("\nEmployees %d\n",i+1);

        printf("Employee id:\n",&employee[i].id);
        printf("Employee name:\n",employee[i].name);
        printf("Employee salary:\n",&employee[i].salary);
    }
    return 0;
}




