#include <stdio.h>

int maze(int cr, int cc, int er, int ec)
{
    int rightways=0;
    int downways=0;
    if(cr==er && cr==ec) return 1;
    if(cr==er) // only rightways
    {
        rightways+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec)// only downways
    {
        downways+=maze(cr+1,cc,er,ec);
    }
    else if(cr<er && cc<ec) 
    {   
        rightways+=maze(cr,cc+1,er,ec);
        downways+=maze(cr+1,cc,er,ec);
    }
    int totalways=rightways + downways;
    return totalways;
}
void main()
{
    int n,m;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Number of columns: ");
    scanf("%d",&m);
    int noofways=maze(1,1,n,m);
    printf("The number of ways is: %d", noofways);
}