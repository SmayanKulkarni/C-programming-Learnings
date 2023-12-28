#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int word_count(char *string, char *word)
{
    int slen=strlen(string);
    int wlen=strlen(word);
    int end=slen-wlen+1;

    int count=0;

    for (int i = 0; i < end; i++)
    {
        bool wordfound=true;
        int j=0;
        while(j< wlen)
        {
            if(word[j]!=string[i+j])
            {
                 wordfound=false; 
                break;
            }
            j++;
        } 
        if(wordfound==true)
        {
            count++;
        }       
   }
   return count;
    
}

void main()
{
    char s[] = "It is It It in this string once";
    char w[]="It";

    int result = word_count(s,w);
    printf("Result: %d", result);
}