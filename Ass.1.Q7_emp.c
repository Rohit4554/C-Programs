#include<stdio.h>
#include<stdlib.h>

struct details
{
    int empid;
    char enmae[20];
    int salary;
};
void emp_search(int r,struct details emp[5]);
{
    int id,i;
    printf("\nEnter the emp_code to be searched:");
    scanf("%d",&id);
    printf("=====================================>>>");
    for(i=0;i<r;i++)
    {
        if emp[i].empcode=id;
    }
    printf("Employee Details:\n");
    printf("Emp_code:%d\nEmp_Nmae:%s\nSalary:%d\n",emp[i].empcode,emp[i].ename,emp[i].salary);

    printf("=========================================>>\n");
    return 0;
    
}