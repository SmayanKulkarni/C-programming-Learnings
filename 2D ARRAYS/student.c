#include <stdio.h>

void main()
{
    int arr[4][2];
    for(int i=0;i<4;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    for(int i=0;i<4;i++)
    {
            printf("The marks of student with roll number %d are: %d", arr[i][0],arr[i][1]);
        printf("\n");
    }    

}