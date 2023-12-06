#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[15] = {"Coool"}, check = '+';
    int i = 0, j = 0, repeatedAlphabet = 1;

    for(i=0; arr[i] != '\0'; i++)
    {
        for(j=i+1; arr[j] != '\0'; j++)
        {
            if(arr[i] == arr[j] && (arr[i] != arr[check]))
            {
                repeatedAlphabet++;
                check = i;
            }
            else if(check == i)
            {
                j++;
            }
        }

        if(repeatedAlphabet > 1)
        {
            printf("character %c repeated %d time(s)\n", arr[i], repeatedAlphabet);
        }
        else if(repeatedAlphabet == 1 && (arr[i] != arr[check]))
        {
            printf("character %c is not repeated\n", arr[i]);
        }
        repeatedAlphabet = 1;
    }

    return 0;
}
