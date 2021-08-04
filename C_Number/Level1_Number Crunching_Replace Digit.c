#include <stdio.h>
int main()
{
    long long int n,digit,pos;
    scanf("%lld %lld %lld",&n, &pos, &digit);
    int first = n/10000;
    int second = (n / 1000)%10;
    int third = (n / 100) % 10;
    int fourth = (n / 10) % 10;
    int fifth = n % 10;
    switch(pos)
    {
        case 1:
            fifth = digit;
            break;
        case 2:
            fourth = digit;
            break;
        case 3:
            third = digit;
            break;
        case 4:
            second = digit;
            break;
        case 5:
            first = digit;
            break;
    }
    printf("%lld%lld%lld%lld%lld",first,second,third,fourth,fifth);
           
}
