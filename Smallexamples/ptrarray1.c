#include <stdio.h>
int main()
{
    int iarray[5]={1,2,3,4,5};
    int *ptr;
    ptr=&iarray[0];
    for(int i=0;i<5;i++)
    {
        printf(" %u  -   %d\n", ptr,*ptr);
        ptr++;
    }
    
    int *iary=iarray;
    for(int i=0; i<5;i++,iary++)
    {
        printf("%d %d %d %d %d\n", iarray[i], *(iarray+i), *(i+iarray), i[iarray], *iary);
    }
}
