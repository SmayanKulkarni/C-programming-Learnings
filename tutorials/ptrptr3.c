#include <stdio.h>

int main()
{
    int a, b, c, d, *ptr1, *ptr2;
    a = 5;
    b = 10;
    ptr1 = &a;
    ptr2 = &b;
    c = *ptr1 + *ptr2;
    d = (*ptr1) * (*ptr2);

    printf("The values stored in variables 'a' and 'b' are %d and %d\n", *ptr1, *ptr2);
    printf("The address of a is: %u\n", &a);
    printf("The address of b is: %u\n", &b);
    printf("The values of 'a' 'b' 'c' and 'd' are: \n a:%d, b: %d, c:%d, d:%d .", a, b, c, d);
}