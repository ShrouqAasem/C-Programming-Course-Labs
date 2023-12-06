#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0, k=0;
    char firstName[20] = {'\0'}, lastName[20] = {'\0'};
    char fullname[100] = {'\0'};

    printf("Please enter your first Name : ");
    gets(firstName);


    for(i=0; firstName[i] != '\0'; i++)
    {
        fullname[i] = firstName[i];
    }

    fullname[i] = ' ';

    printf("Please enter your Last Name : ");
    fflush(stdin);
    gets(lastName);


    for(k=i + 1 ; lastName[j] != '\0'; k++)
    {

        fullname[k] = lastName[j];
        j++;
    }
    printf("Your Full name is : ");
    for(i=0; fullname[i] != '\0'; i++)
    {
       printf("%c", fullname[i]);
    }
    return 0;
}
