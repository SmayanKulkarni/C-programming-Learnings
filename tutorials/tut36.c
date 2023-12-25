#include <stdio.h>

int len;
void arrayrev(int arr[])
{
    for (int i = len-1; i > -1; i--)
    {
        printf("%d, ", arr[i]);
    }
}
int main()
{
    
    printf("Please enter how long your array should be: \n");
    scanf("%d", &len);
    int arr1[len];
    int temp;
    for (int i = 0; i < len; i++)
    {
        printf("Please enter your %d component of the array:\n", 1 + i);
        scanf("%d", &arr1[i]);
    }

    printf("The array before is: ");

    for (int i = 0; i < len; i++)
    {
        printf("%d,", arr1[i]);
    }

    printf("The array after reversal is: ");
    arrayrev(arr1);
    
     return 0;
}