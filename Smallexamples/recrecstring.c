#include <stdio.h>
#include <string.h>

void print_rev(char *s);
void main()
{
    char s[] = "This is the way";
    print_rev(s);
}

void print_rev(char *s)
{
    if (*s != '\0')
    {
        print_rev(s + 1);
        printf("%c", *s);
    }
}