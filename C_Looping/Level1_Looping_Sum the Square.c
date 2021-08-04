#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      sum+=i*i;
    printf("%d",sum);
    return 0;
}
