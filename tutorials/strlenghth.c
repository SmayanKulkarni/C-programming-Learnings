#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// computing the lengh of a string without using string library

 int s_length(char *);
int main()
{
    char str[100];
    printf("Enter any string: \n");
    gets(str);
    printf("The length of the given string entered is: %d\n", s_length(str));
    return 0;
}

int s_length(char *s)
{
    int i=0;
    while (s[i]!= '\0')
    i++;
    return(i);
}