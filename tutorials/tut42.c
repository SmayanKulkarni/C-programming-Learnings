#include <stdio.h>
int func1(int b)
{
    printf(" The adress of the inside of func1 is: %d\n", &b);  
    return b * 10;
}
int main()
{
    int b = 344;
    int val = func1(b);
    int *ptr =&val;
    printf("the adres of b inside main is %d\n" , &b);
    printf(" The value of func1 is : %d\n",val);
    return 0;
}