#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    scanf("%d",&n);
    while(n%2 == 0)
    {
        printf("%d ",2);
        n = n/2;
    }
    for(int i = 3;i <=sqrt(n);i=i+1)
    {
        while(n%i == 0)
        {
            printf("%d ",i);
            n = n/i;
        }
    }
    if(n>2)
    {
        printf("%d ",n);
    }
}
