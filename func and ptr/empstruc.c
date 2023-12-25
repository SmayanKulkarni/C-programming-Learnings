#include <stdio.h>
#include <string.h>

struct Employee {
    int emp_id;
    char name[50];
    char division[50];
    char post[50];
    float salary;
};

void swap(struct Employee a, struct Employee b) {
    struct Employee temp = a;
    a = b;
    b = temp;
}

void sortEmployeesById(struct Employee arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].emp_id > arr[j + 1].emp_id) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    struct Employee employees[50];
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Input employee details
    for (int i = 0; i < numEmployees; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);

        printf("Name: ");
        scanf("%s", &employees[i].name);

        printf("Division: ");
        scanf("%s", &employees[i].post);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Sort employees by ID
    sortEmployeesById(employees, numEmployees);

    // Display sorted employee details
    printf("\nSorted Employee Details by ID:\n");
    printf("ID\tName\tDivision\tPost\tSalary\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("%d\t%s\t%s\t%s\t%f\n", employees[i].emp_id, employees[i].name,
               employees[i].division, employees[i].post, employees[i].salary);
    }

    return 0;
}
