#include <stdio.h>

void main()
{
    int arr[]= {1,2,3,3,23,23,5};
    int max=arr[0];
    int smax=arr[0];
    for(int i=0; i<7;i++)
    {
        if(max<arr[i])
        {
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i])
        {
            smax=arr[i];
        }
    }
    printf("%d", smax);
}