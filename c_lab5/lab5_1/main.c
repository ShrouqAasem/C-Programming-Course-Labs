#include <stdio.h>
#include <stdlib.h>


typedef struct Employee
{
    char name[15];
    int id;
    int salary;
    int bonus;
    int deduction;
    int net
} Emp_Struct;
int main()
{
    Emp_Struct emp;
    printf("Enter the Employee's ID : \n");
    scanf ("%d", &emp.id);
    printf("Enter the Employee's Name : \n");
    fflush(stdin);
    fgets (emp.name,15,stdin);
    printf("Enter the Employee's salary : \n");
    scanf ("%d", &emp.salary);
    printf("Enter the Employee's bonus : \n");
    scanf ("%d", &emp.bonus);
    printf("Enter the Employee's deduction : \n");
    scanf ("%d", &emp.deduction);
    emp.net = emp.salary + emp.bonus - emp.deduction;
    printf ("Employee ID: %d\nEmployee Name: %s\nEmployee Net salary: %d\n",emp.id,emp.name,emp.net);
    return 0;
}
