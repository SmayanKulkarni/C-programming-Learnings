#include <stdio.h>

// can take single and double steps and triple steps
int stair(int n)
{
    if(n==1 || n==2) return n;
    if(n==3) return n+1;
    
    int totalways=stair(n-1)+stair(n-2)+stair(n-3);
    return totalways;
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ways=stair(n);
    printf("\nNumber of ways to climb %d stairs are = %d\n", n,ways);
    
}