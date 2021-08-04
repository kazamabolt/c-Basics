#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long int fact=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
      fact=fact*i;
    printf("%ld",fact);
    return 0;
}
