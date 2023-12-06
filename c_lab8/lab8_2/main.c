#include "emp_men.h"
#include <windows.h>

int main()
{

    int size=2;
    int i=0;
    int filled=0;
    int *co=&filled;
    int c[23];
    printf ("Enter the No. of Employees you want to store\n");
    scanf ("%d",&size);

     Emp ** employee;

    for (i=0;i<size;i++)
    {
        employee [i]= (Emp *) malloc (sizeof(Emp));
        addemp (employee [i],co);

    }
    for (i=0;i<size;i++)
    {

        display (employee [i],i);
    }

    return 0;
}
