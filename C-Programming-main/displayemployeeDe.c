#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};

int main() {
    int n, i;
    struct Employee *emp;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    emp = (struct Employee*)malloc(n * sizeof(struct Employee));
    if (emp == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(emp + i)->id);
        printf("Name: ");
        scanf(" %[^\n]", (emp + i)->name);
        printf("Designation: ");
        scanf(" %[^\n]", (emp + i)->designation);
        printf("Department: ");
        scanf(" %[^\n]", (emp + i)->department);
        printf("Salary: ");
        scanf("%f", &(emp + i)->salary);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", (emp + i)->id);
        printf("Name: %s\n", (emp + i)->name);
        printf("Designation: %s\n", (emp + i)->designation);
        printf("Department: %s\n", (emp + i)->department);
        printf("Salary: %.2f\n", (emp + i)->salary);
    }

    free(emp);
    return 0;
}