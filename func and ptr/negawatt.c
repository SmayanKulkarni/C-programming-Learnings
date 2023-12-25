#include <stdio.h>

void main()
{
    int arr[]={14,3,2,4,5,3,2,1};
    int len=8;
    int del;
    printf("Enter the element of array u want to delete\n");
    scanf("%d", &del);
    int index;

    for(int i=0;i<len;i++)
    {
        if(arr[i]==del)
        {
            index=i;
        }
    }
    for(int i=index;i<len-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<len-1;i++)
    {
        printf("%d ",arr[i]);
    }
}