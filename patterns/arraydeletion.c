#include<stdio.h>
int del(int a[],int n,int x)
{
int i,j;
for(i=0;i<n;i++)
{
if(a[i]==x)
{
for(j=i;j<n-1;j++)
{
a[j]=a[j+1];
}
n--;
i--;
}
}
for(j=0;j<n;j++)
{
printf("%d ",a[j]);
}
return 0;
}
int main()
{
int a[100],n,i,x;
printf("Enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element %d:",i);
scanf("%d",&a[i]);
}
printf("Enter the number to be deleted");
scanf("%d",&x);
del(a,n,x);
return 0;
}