#include <stdio.h>
#include <string.h>

void main()
{
    char s[]="This is a string";
    int len=strlen(s);

    for(int i=0;i<len/2;i++)
    {
        char temp=s[i];
        s[i]=s[len-i-1];
        s[len-1-i] = temp;
    }

    printf("%s", s);
}