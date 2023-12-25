#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i] !='\0')
    {
        printf("%c", str[i]);
        i++;
    }
}


int main()
{
    char str[]={'s', 'm', 'a', 'y', 'a', 'n', '\0'};
    printStr(str);
    printf("\n");

    char str1[34];
    gets(str1);
    printf("The string entered is: %s\n", str1);

    return 0;
}
    