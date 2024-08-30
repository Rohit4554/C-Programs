#include <stdio.h>

// Structure definition for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Accepting details of employees
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i+1);

        printf("Employee ID: ");
        scanf("%d", &employees[i].id);

        printf("Employee Name: ");
        scanf("%s", employees[i].name);

        printf("Employee Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Details:\n");

    // Displaying details of employees
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i+1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    // Finding employee with maximum salary
    int maxIndex = 0;
    float maxSalary = employees[0].salary;

    for (i = 1; i < n; i++) {
        if (employees[i].salary > maxSalary) {
            maxIndex = i;
            maxSalary = employees[i].salary;
        }
    }

    printf("\nEmployee with maximum salary:\n");
    printf("ID: %d\n", employees[maxIndex].id);
    printf("Name: %s\n", employees[maxIndex].name);
    printf("Salary: %.2f\n", employees[maxIndex].salary);

    return 0;
}

