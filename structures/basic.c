#include <stdio.h>

void main()
{
    char a[30]="This";
    char b[30]= "that";

    int ctr=0;
    for(int i=0;a[i]!='\0';i++)
    {
        ctr++;
    }

    for(int j=0; b[j]!='\0'; j++)
    {
        a[ctr]=b[j];
        ctr++;
    }
    printf("%s", a);
}