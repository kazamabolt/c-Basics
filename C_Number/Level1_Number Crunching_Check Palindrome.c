#include<stdio.h>
long long int digitSum(long long int n)
{
    long long int sum = 0;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int isPalindrome(long long int n)
{
    int divisor = 1;
    while (n / divisor >= 10)
        divisor *= 10;
 
    while (n != 0) {
        int leading = n / divisor;
        int trailing = n % 10;
        if (leading != trailing)
            return 0;
        n = (n % divisor) / 10;
        divisor = divisor / 100;
    }
    return 1;
}
int isDigitSumPalindrome(long long int n)
{
 
    long long int sum = digitSum(n);

    if (isPalindrome(sum))
        return 1;
    return 0;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
 
    if (isDigitSumPalindrome(n))
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");
 
    return 0;
}
