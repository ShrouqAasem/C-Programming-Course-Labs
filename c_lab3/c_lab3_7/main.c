#include <stdio.h>
#include <stdlib.h>

void cube_num(int x);

int main()
{
    int x=0;
    printf("Enter number: ");
    scanf("%d", &x);
    cube_num(x);
    return 0;
}

void cube_num(int x)
{
    printf("the cube of your number is : %d ",x*x*x);
}
