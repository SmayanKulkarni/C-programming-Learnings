#include <stdio.h>
#include <string.h>

void remove_char(char *string, char r)
{
    int pos=0;
    while(string[pos] !='\0')
    {
        if(string[pos] == r)
        {
            int newpos=pos;
            while(string[newpos] != '\0')
            {
                string[newpos] = string[newpos+1];
                newpos++;
            }
        }
        else pos++;
    }
}


void main()
{
    char s1[]="A string with some words!";
    remove_char(s1,'o');
    printf("%s\n",s1);
}