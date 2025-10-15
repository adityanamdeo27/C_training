#include <stdio.h>
struct Employee {
    char name[50];
    float salary;
};
int main() {
    struct Employee emp;
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    printf("\n--- Employee Details ---\n");
    printf("Name   : %s\n", emp.name);
    printf("Salary : %.2f\n", emp.salary);
    return 0;
}
