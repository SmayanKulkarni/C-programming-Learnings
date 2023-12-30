#include <stdio.h>
#include <string.h>


void main()
{
    char a[100];
    printf("Enter a string: ");
    gets(a);
    int len = strlen(a);
    int ctr = 0;
    int newpos=0;
    // toupper(a, len);
    
    for(int i=0;i<len;i++)
    {
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            ctr++;
            newpos = i;
            a[newpos] = a[newpos + 1];
            newpos++;
        }
    }
    a[newpos] = '\0';
    printf("The number of vowels in the string is: %d \n", ctr);
    printf("The string now is: %s", a);
}