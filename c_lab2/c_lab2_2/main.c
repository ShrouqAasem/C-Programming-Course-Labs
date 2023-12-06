#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Number = 0;
    printf("Enter the number : ");
    scanf("%d", &Number);
    if (Number % 2 == 0 )
        { printf ("The Number You Entered Is Even");

        }
    else if (Number % 2 == 1)
        { printf ("The Number You Entered Is Odd");

        }

    return 0;
}
