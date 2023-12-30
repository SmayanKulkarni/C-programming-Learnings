#include <stdio.h>
#include <string.h>

void main()
{
    char s[] = "10101";

    int len = strlen(s);
    int total = 0;
    int decval = 1;

    for (int i = (len - 1); i >= 0; i--)
    {
        if (s[i] == '1')
        {
            total += decval;
        }
        decval *= 2;
    }
    printf("%d", total);
}