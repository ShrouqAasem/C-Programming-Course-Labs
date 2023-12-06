#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x = 0;
   int y = 0;
   printf("Enter Number : ");
   scanf ("%d",&x);
   printf("Enter Number 2 : ");
   scanf("%d", &y);


   int Quotient = (float)x/y;
   int Remainder = x%y;
   printf("Your Result is : Quotient %d and Remainder %d  ", Quotient, Remainder);

}
