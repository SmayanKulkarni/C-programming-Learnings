//passing arguments by pointer

#include <stdio.h>

void add10(int *studentmarks)
{
    *studentmarks+= 10;
}
int main()
{
    int marks=25;
    printf("The value of marks before: %d\n", marks);
    add10(&marks);
    printf("The value of marks now is: %d\n", marks);
}