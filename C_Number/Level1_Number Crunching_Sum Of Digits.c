#include <stdio.h>

int main()
{
   long long int n,t,remainder,sum = 0; 
   scanf("%lld", &n);
   t = n;
   while (t != 0)
    {
        remainder = t % 10;
        sum = sum + remainder;
        t = t / 10;
    }
    printf("%lld", sum);
    return 0;
}
