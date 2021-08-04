#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m;
    long int pro=1;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
      pro=pro*i;
    printf("%ld",pro);
    return 0;
}
