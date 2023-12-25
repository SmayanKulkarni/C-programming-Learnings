#include <stdio.h>
#include <string.h>


void main()
{
    char s[]="This is the way";
    int len=strlen(s)-1;
    char temp;

    for(int i=0;i<len/2;i++)
    {
        
        s[i]=temp;
        s[i]=s[len-i];
        s[len-i]=temp;
    }
    printf("%s",s);
}