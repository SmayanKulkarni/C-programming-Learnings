#include <stdio.h>

int main()
{
    int myarr[]={5,9,8,7,8,1};
    int len=sizeof(myarr)/sizeof(myarr[0]);
    int min=myarr[0];
    for(int i=0; i<len; i++)
    {
        if(min>myarr[i])
        {
            myarr[i]=min;
        }
    }
    printf("Minimum: %d", min);
    return 0;
}