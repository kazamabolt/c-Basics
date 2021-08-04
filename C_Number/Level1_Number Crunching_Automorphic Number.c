#include<stdio.h>

int checkAutomorphic(long long int num)
{
    long long int square = num * num;
    
    while (num > 0)
    {
        if (num % 10 != square % 10)
            return 0;
        num = num / 10;
        square = square / 10;
    }
    return 1;
}

int main()
{
    long long int num;
    scanf("%lld",&num);
    if(checkAutomorphic(num))
        printf("AUTOMORPHIC"); 
    else
        printf("NOT AUTOMORPHIC");
    return 0;
}
