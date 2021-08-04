#include<stdio.h>
int main()
{
    int n,row,col,count;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
           printf(" ");
        }
        count=n;
        for(col=1;col<=row;col++)
        {
            
            printf("%d ",count--);
        }
        printf("\n");
    }
    return 0;
}
