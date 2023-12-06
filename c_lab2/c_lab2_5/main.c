#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, y = 0;
    char choice = 0;
    printf("Please choose an operation to perform \n +.Addition \n -.Subtraction \n *.Multiplication \n /.Division\n");
    choice = getchar();

    printf("Please enter the first number \n");
    scanf("%d", &x);

    printf("Please enter the second number \n");
    scanf("%d", &y);

    switch(choice)
    {
    case '+' :
        printf("\n Addition of %d and %d = %d \n", x, y, x + y);
        break;

    case '-' :
        printf("\n Subtraction of %d and %d = %d \n", x, y, x - y);
        break;

    case '*' :
        printf("\n Multiplication of %d and %d = %d \n", x, y, x * y);
        break;

    case '/' :
        if(y!=0){
                printf("\n Division of %d and %d = %d \n", x, y, x / y);

        }
        else{
            printf("Error \n");
        }
        break;

    case 5 :
        return 0;
        break;

    default :
    printf("Invalid operation \n");
    break;
    }
    return 0;
}
