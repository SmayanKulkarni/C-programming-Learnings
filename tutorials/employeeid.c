#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *id;
    char a;
    int len;
    printf("Welcome to the portal of Name and Information storing company's web portal\n To continue with the program press Y and to exit press N\n");
    scanf("%c", &a);

    switch (a)
    {
    case 'Y':

    {
        for (int i = 1; i < 4; i++)
        {
            printf("Employee number %d please enter the length of your id: ", i);
            scanf("%d", &len);
            id = (char *)malloc((len + 1) * sizeof(char));
            printf("Please enter your ID: ");
            scanf("%s", id);
            printf("Employee number %d your ID is:%s \n", i, id[i]);
        }

        break;
    }
    case 'N':
        break;

    default:
        break;
    }

    return 0;
}