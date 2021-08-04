#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,sum=0;
    scanf("%d %d",&n,&m);
    while(n<=m)
      sum=sum+n++;

    printf("%d",sum);
    return 0;
}
