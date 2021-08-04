#include<stdio.h>
int main()
{
    long long int c,n;
    scanf("%lld",&n);
    for(int i=n/2;i>=1;i--)
    {
        if(n%i==0)
        {
            c=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                    c++;
            }
            if(c==2)
            {
                printf("%d",i);
                break;
            }
                
        }
    }
    return 0;
}
