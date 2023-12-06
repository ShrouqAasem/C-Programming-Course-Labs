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

   int total = x+y;
   int sub = x-y;
   int multiplies = x*y;
   int divides = (float)x/y;
   printf("Your Result is : sum %d and sub %d and mul %d and div %d ", total, sub, multiplies, divides);

}

