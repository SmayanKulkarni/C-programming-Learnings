#include <stdio.h>
#include <string.h>

void main()
{
    char s1[]="ABCCBA";
    int len=6;
    int ctr=0;
    for(int i=0;i<len/2;i++)
    {
        
        if(s1[i]==s1[len-i-1])
        {
            ctr++;
        }
        
    }
    if(ctr==len/2) printf("The string is a palindrome");
        else printf("The string is not a palindrome");
   
}