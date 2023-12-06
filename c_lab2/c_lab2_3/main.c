#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;

    printf("Enter the number 1 : ");
    scanf("%d", &A);

    printf("Enter the number 2 : ");
    scanf("%d", &B);

    printf("Enter the number 3 : ");
    scanf("%d", &C);

    if ( A >= B && A >= C )
        { printf ("The Number Is : %d", A);

        }
    else if ( B >= B && B >= C)
        { printf ("The Number Is : %d", B);

        }
    else if ( C >= A && C >= B)
        { printf ("The Number Is : %d", C);

        }
    return 0;
}
