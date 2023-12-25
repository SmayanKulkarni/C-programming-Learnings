#include <stdio.h>
#include <string.h>
void main()
{
    char sen[100];
    gets(sen);
    int len=strlen(sen);
   int j=0;
    for(int i=0;sen[i]!='\0';i++)
    {
        if(!(sen[i]=='a' || sen[i]=='o'|| sen[i]=='e' || sen[i]=='i'||sen[i]=='u'))
        {
            sen[j]=sen[i];
            j++;
        }
    }
    sen[j]='\0';
    printf("%s", sen);


    
    
}