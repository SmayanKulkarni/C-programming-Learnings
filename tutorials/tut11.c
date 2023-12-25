#include <stdio.h>

int main()
{
    int age;
     printf("Enter your age: ");
     scanf("%d", &age);
     
     switch(age)
     {
        case 3:
        printf("Your age is 3");
        break;

        case 13:
        printf("Your age is 13");
        break;

        case 23:
        printf("Your age is 23");
        break;

        default:
        printf("Age is not 3, 13, 23");
        break;
     }

     return 0;
}