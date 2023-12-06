#include <stdio.h>
#include <stdlib.h>
#define size 5

typedef struct Employee
{
    int id;
    int salary;
    int bonus;
    int deduction;
    int net;
    char name[15];
} Emp_Struct;

int main()
{
    int i;
    Emp_Struct emp[size];
    for (i=0; i<size; i++)
    {
        printf("Enter the Employee No.%d ID : \n",i+1);
        scanf ("%d", &emp[i].id);
        printf("Enter the Employee No.%d Name : \n",i+1);
        fflush(stdin);
        fgets (emp[i].name,15,stdin);
        printf("Enter the Employee No.%d salary : \n",i+1);
        scanf ("%d", &emp[i].salary);
        printf("Enter the Employee No.%d bonus : \n",i+1);
        scanf ("%d", &emp[i].bonus);
        printf("Enter the Employee No.%d deduction : \n",i+1);
        scanf ("%d", &emp[i].deduction);
        emp[i].net = emp[i].salary + emp[i].bonus - emp[i].deduction;
    }
    for (i=0; i<size; i++)
    {
        printf("Employee (%d):\n",i+1);
        printf ("Employee ID : %d\nEmployee Name : %s\nEmployee Net salary : %d\n",emp[i].id,emp[i].name,emp[i].net);
    }
    return 0;
}
