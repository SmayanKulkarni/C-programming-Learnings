#include <stdio.h>
#include <string.h>

void rev_word(char *s);

void main()
{
    char s[]="This is the way."
}

void rev_word_2(char *s)
{
    int len=strlen(s);
    int i=0,j=0;
    char temp[100];
    for(i=0;i<len;i++)
    {
        for(j=0;i<len,i++,j++)
        {
            if(s[i]==' ' || s[i]=='.')
                break;
            temp[j]=s[i];
        }
        while (j>0)
        {
            j--;
            s[i-j-1]=temp[j];
        }
        
    }
}