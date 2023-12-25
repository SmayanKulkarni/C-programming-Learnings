#include <stdio.h>

int main()
{
     int arr[3][2]= {{1,2} , {1,2}, {1,3}};
    int i,j;
    for(int i=0; i<3;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d %d %d\n",*(arr+i)+j, *(*arr+i)+j, arr[i][j]);
        }
        
    }
}