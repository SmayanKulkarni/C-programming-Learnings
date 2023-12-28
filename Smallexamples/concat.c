#include <stdio.h>
#include <string.h>
void main()
{
    char a[100], b[100],c[100];
    printf("Enter a string: ");
    gets(a);
    int lena = strlen(a);

    printf("Enter another string: ");
    gets(b);
    int lenb = strlen(b);
    
    
    for(int i =0;i<lenb;i++)
    {
        a[lena+i] = b[i];
    }
    int lenaf=lena+lenb;
    a[lenaf] = '\0';
    
    
    printf("%s", a);
}