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

void  addemp (Emp_Struct add [], int i)
{
    int j;
    for (j=0;j<i;j++)
    {
    printf("Enter the Employee No.(%d) ID\n",j+1);
    scanf ("%d", &add[j].id);
    printf("Enter the Employee No.(%d) Name\n",j+1);
    fflush(stdin);
    fgets (add[j].name,15,stdin);
    printf("Enter the Employee No.(%d) salary\n",j+1);
    scanf ("%d", &add[j].salary);
    printf("Enter the Employee No.(%d) bonus\n",j+1);
    scanf ("%d", &add[j].bonus);
    printf("Enter the Employee No.(%d) deduction\n",j+1);
    scanf ("%d", &add[j].deduction);
    add[j].net = add[j].salary + add[j].bonus - add[j].deduction;
    }

}

void display(Emp_Struct dis [],int i)
{
    int j;
    for (j=0;j<i;j++)
    {
    printf("\tEmployee (%d):\n",j+1);
    printf ("Employee ID: %d\nEmployee Name: %sEmployee Net salary: %d\n",dis[j].id,dis[j].name,dis[j].net);
    }
}

int main()
{
    int i;
    Emp_Struct emp[size];

    addemp(emp,size);

    display(emp,size);

    return 0;
}
