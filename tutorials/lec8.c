#include <stdio.h>


int main()
{

    /* this is a multiline comment works fine

    comment is still going on
    */
  int a, b;
  printf("Please enter a number for whihc u want multiplication table: \n");
  scanf("%d", &a);
  printf(" The Multiplication table is as follows: ");
  for(int i=0; i<=12; i++)
  {
    b=a*i;
    printf("%d * %d = %d\n", a,i,b);
  }
}