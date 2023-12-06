#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet = 0;
    printf("Enter the char\n");
    alphabet = getchar();

    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
        printf("%c is an alphabet.", alphabet);
    else
        printf("%c is not an alphabet.", alphabet);



}
