#include <stdio.h>
#include <stdlib.h>

int main()
{
   int Number=0;
    printf("Enter the number : ");
    scanf("%d", &Number);
    if (Number > 0)
        { printf ("The Number You Entered Is Positive");
        }
    else if (Number < 0)
        { printf ("The Number You Entered Is Negative");

        }
    else if (Number == 0)
        { printf ("The Number You Entered Is Zero");

        }
        return 0;
}
