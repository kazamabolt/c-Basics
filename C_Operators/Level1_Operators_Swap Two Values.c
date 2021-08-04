#include<stdio.h>
int main()
{
    int n,m,temp;
    scanf("%d%d",&n,&m);
    temp=n;
    n=m;
    m=temp;
    printf("%d %d",n,m);
}
