#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,c=0;
    scanf("%d",&n);
    while(n!=c)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            c++;
        }
        i++;
    }
    return 0;
}
