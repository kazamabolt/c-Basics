#include <stdio.h> 
int main() {
    long long int n, rev = 0, remainder;
    scanf("%lld", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("%lld", rev);
    return 0;
}
