/*Write a program to accept �n� employee details (eno, ename, salary) and
display all employee details whose salary is more than 10000, by
passing array of structure to the function*/

#include<stdio.h>

#define MAX_EMPLOYEE 100
//structure definition for employee details
struct employee
{
    int empno;
    char empname[100];
    float salary;
};
// function to display employee details
void displayEmployees(struct Employee employees[],int n)
{
    printf("Employee with salary more than 10000:\n");
    printf("===========================\n");

    for(int i=0;i<n;i++)
    {
      if(employee[i].salary>10000)
      {
        printf("Emplyee No.:%d\n",employee[i].empno);
        printf("Employee Name:%s\n",employee[i].empname);
        printf("Employee Salary:%.2f\n",employee[i].salary);
        printf("---------------------------------");
      }
    }

}
int main()
{
    struct Employee employee[MAX_EMPLOYEE]
    int n;

    printf("Enter the number of employees.:");
    scanf("%d",&n);

    //Accept employee details
    for(int i=0;i<n;i++)
    {

    printf("\nEmployee %d Details\n",i+1);
    printf("===========================");

    printf("Enter the Employee no.:");
    scanf("%d",&employee[i].empno);

    printf("Enter the employee Name:");
    scanf("%s",employee[i].empname);

    printF("Enter the employee salary:");
    scanf("%f",&employee[i].salary);

    }
// Display employee details with salary>10000
displayEmployees(employees,n);
 return 0;
 }
