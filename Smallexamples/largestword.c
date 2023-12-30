#include <stdio.h>
#include <string.h>

int largest_word(char *s)
{
    int len = strlen(s);
    int count = 0;
    int max = -1;
    char nonwords[] = "  .,;\n\t";
    int i = 0;
    while (i < len)
    {
        while (i < len)
        {
            if (strchr(nonwords, s[i]) != NULL) // meaning is that if the character from nonwords is found in the array then break is used
                break;
            i++;
            count++;
        }
        if (count > max)
        {
            max = count;
        }
        while (i < len)
        {
            if (strchr(nonwords, s[i]) == NULL)
                break;

            i++;
        }
    }
}

void main()
{
    char s[] = "This is the way. Again...";
    int largestlen=largest_word(s);
    printf("%d", largestlen);
}