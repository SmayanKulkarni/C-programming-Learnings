#include <stdio.h>

void main()
{
    int arr[]={1,2,23,4,5,6};
    int *ptr=&arr[0];
    int b[50];
    for(int i=0;i<6;i++)
    {
        b[i]=*ptr;
        ptr++;   
    }
    for(int i=0;i<6;i++){
        printf("%d ", b[i]);
    }
} 