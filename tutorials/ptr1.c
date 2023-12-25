
#include <stdio.h> 
void main()
{
int *iptr;
int var1, var2;
iptr=&var1;
var1=10;
var2=20;
iptr=&var1;
printf("Address and contents of var1 is %p and %d\n", iptr, *iptr);
iptr=&var2;
printf("Address and contents of var2 is %p and %d\n", iptr, *iptr);
*iptr = 125;
var1=*iptr+1;
}


