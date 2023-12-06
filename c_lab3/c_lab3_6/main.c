#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter = 0;
    char convert = 0;
    printf("Enter letter: ");
    scanf("%c", &letter);
    convert = letter -32;
    printf("%c\n", convert);
    return 0;
}
