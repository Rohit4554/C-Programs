#include<stdio.h>

#define MAX_EMPLOYEE 100
struct employee
{
    int id;
    char empname[100]
    float salary;
};
void displayEmployees (struct Employee employee[],int n);
{
    printf("Employee with salary more than 10000 \n")
    printf("-----------------------------------------");

    for(i=0;i<n;i++)
}
  if( employee[i].salary > 10000)
  {
    printf("Employee NO.:%d\n",employee[i].empno);
    printf("Employee Name:%s\n",employee[i].empname);
    printf("Employee Salary:%f\n",employee[i].empsalary);
  }
  int main()
  {
    struct Employee employee [MAX_EMPLOYEE]
    int n;
    printf("Enter the number of employees:\n")
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n%d Employees Details:\n",i+1);
        printf("---------------------------------------");

        printf("Enter the Employee id. Number.:")
        scanf("%d",&employee[i].id);

        printf("Enter the employee Name:");
        scanf("%s",employee[i].empname);

        printf("Enter the Employee Salary:");
        scanf("%f",&employee[i].salary)
    }
    displayEmployees (employees,n)
    return 0;

  }