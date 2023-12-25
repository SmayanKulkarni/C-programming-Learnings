

#include<stdio.h>
#include<math.h>
int area();
void main()
{
    int a;
printf("Enter the side of a square :\n");
scanf("%d", &a);
 printf("%d",area(a));
}


int area (int a)
{
int b=pow(a,2);
return b;
}