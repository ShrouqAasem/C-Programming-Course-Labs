#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Number;
    int sum = 0;
    printf("Please enter an Number : ");

    do
    {
        scanf("%d", &Number);
        sum = sum + Number;
    }

    while (sum < 100);

    printf("The sum is = %d \Number", sum);
    return 0;
}
