#include<stdio.h>
void main()
{
    int a[100],count=0,ctr=0,i,n,el,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to find its frequency:");
    scanf("%d",&el);
    for(i=0;i<n;i++)
    {
        if(a[i]==el)
        {
            count++;
        }
        
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==el)
        {
            ctr++;
        }
        if(ctr>=1)
        {
            a[i]=a[i+1];
            i--;
            
        }
    }

    if(count==0)
    {
        printf("Invalid element");
    }
    else if(ctr>=1){
    printf("\nThe frequency of %d is %d\n",el,count);
    printf("The new array is \n");
    for(i=0;i<=n-count+1;i++)
    {
        printf("%d ",a[i]);
    }
    }
}