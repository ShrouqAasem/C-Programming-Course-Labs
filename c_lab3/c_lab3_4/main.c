#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3 );

int main()
{
     int a = 0;
     int b = 0;
     int c = 0;
     int result = 0;
     printf ("Enter Numbers  : ");
     scanf("%d%d%d", &a, &b, &c);

     result = max(a, b, c);

    printf ("Max value is : %d\n" , result );

       return 0;
       //result = max(a, b, c);
}
  int max (int num1, int num2, int num3){
   int result = 0;
   if (num1 > num2 && num1 > num3)
       result = num1;
   else if (num2 > num1 && num2 > num3)
       result = num2;
   else if (num3 > num1 && num3 > num2)
       result = num3;

    return result;
}
