#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("%d X %d = %d\n",i,n,i*n);
    return 0;
}
