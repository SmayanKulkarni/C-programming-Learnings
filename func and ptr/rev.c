#include <stdio.h>

void ispali(int arr[])
{
     int ctr=1;
    for(int i=0;i<9/2;i++)
    {
        if(arr[i]==arr[8-i])
        {
            ctr++;
        }
       else
       {
        printf("not palindrome \n");
        break;
        
       }
       if(ctr==4){

        break;
    }
    }
}
void main()
{
    int arr[9]={1,2,3,4,5,4,3,2,1};
    ispali(arr);   

}