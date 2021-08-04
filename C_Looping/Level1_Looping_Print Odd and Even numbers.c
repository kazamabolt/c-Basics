#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n-1;i+=2)
        printf("%d %d\n",i+1,i+2);
    if(n%2!=0) printf("%d",n);
    return 0;
}
