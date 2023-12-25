#include <stdio.h>
void main()
{
int n;
printf("Enter the number of rows: "); 
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
 for (int j = 1; j <=n-i; j++)
 {
 printf(" ");}
 for (int m =1; m <=i; m++)
 {
 printf("%c",m+64);}
 for (int k = i-1; k>=1; k--)
 {
 printf("%c",k+64);}
printf("\n");} }