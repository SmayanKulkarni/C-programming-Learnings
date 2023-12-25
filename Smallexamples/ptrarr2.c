#include <stdio.h>

int main()
{
    int arr[5]= {1,25,3245,545,43}, *p;
    int i;
    for(p=arr+4, i=0; i<5; i++)
    {
        printf("%i, %d\n", p[-i], *(p-i));
    }
}