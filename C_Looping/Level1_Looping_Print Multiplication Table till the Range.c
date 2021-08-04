#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++)
        printf("%d X %d = %d\n",i,n,i*n);
    return 0;
}
