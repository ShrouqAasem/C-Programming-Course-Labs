#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Degree = 0;
    printf("Enter Your Degree : ");
    scanf("%d", &Degree);

    if (Degree < 50)
        { printf ("Fail");

        }
    else if (Degree >= 50 && Degree < 65)
        { printf ("pass");

        }
    else if (Degree >= 65 && Degree < 75)
        { printf ("Good");

        }
    else if (Degree >= 75 && Degree < 85)
        { printf ("Very Good");

        }
    else if (Degree >= 85 && Degree <=100)
        { printf ("Excellent");

        }

    return 0;
}
