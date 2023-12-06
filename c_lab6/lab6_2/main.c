#include <stdio.h>
#include <stdlib.h>

int mul (int,int);

int main()
{
    //2) Recursive: Power.
    int x;
    int y;
    int result;
    printf ("Please enter a number : \n");
    scanf ("%d",&x);
    printf ("Enter the power operator : \n");
    scanf ("%d",&y);
    result = mul (x,y);
    printf ("The result is : %d\n",result);
    return 0;
}



int mul (int num,int po)
{
    int re;
    if (po>0)
    {
        return  num * mul (num, po-1);
    }
    else
    {
        return 1;
    }
}
