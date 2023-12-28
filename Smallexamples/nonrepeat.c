#include <stdio.h>

void main()
{
    int arr[10]={1,2,3,4,5,5,4,2};
    int len=10;
    int ctr=0;
    int j=0;
    for(int i=0;i<len;i++)
    {
        for( j=0;j<len;j++)
        {
            if(arr[i]==arr[j] && i!=j) break;
        }
        
        if(j==len) ctr++;
        
    }
    printf("%d", ctr);
}