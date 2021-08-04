#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n>0)
      sum=sum+n--;

    printf("%d",sum);
    return 0;
}
