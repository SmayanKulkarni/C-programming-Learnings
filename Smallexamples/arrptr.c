#include <stdio.h>
int main()
{
    int arr[3] = {1, 2, 5};
    int *ptr[3];

    for (int i = 0; i < 3; i++)
    {
        ptr[i] = arr + i; // assigning addresses of consecutive arr elements to the pointer variable
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The address is: %p and the value at the address is: %d\n", ptr[i], *ptr[i]);
    }
}