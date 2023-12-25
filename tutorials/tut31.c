#include <stdio.h>

void changevalue(int* address)
{
    *address = 43;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of a now is : %d\n" , a);
    changevalue(&a);
    printf("The value of a after swap is : %d\n" , a);

}
