#include<stdio.h>
int main()
{
    int a=2,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a+=13*i;
    }
    return 0;
}
