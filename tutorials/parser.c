#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // variable to tag wweather we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i]; // starts collecting the req string
            index++;
        }
    }
    string[index] = '\0';

    // to remove trailing spaces from start
    while (string[0] == ' ')
        
    {
        // shift to the left
        for (int j = 0; j < strlen(string); j++)
        {
            string[j] = string[j + 1];
        }
    }

    //remove the trailing spaces from the end
    while(string[strlen(string)-1]==' ')
    {
        string[strlen(string)-1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>     this is a heading         </h1>";
    parser(string);
    printf("The parsed strinh is : %s", string);
    return 0;
}
