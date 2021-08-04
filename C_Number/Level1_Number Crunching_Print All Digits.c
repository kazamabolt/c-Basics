#include <stdio.h>
#include<math.h>


void main(){
    long long int num;
    int digit;
    scanf("%lld",&num);
    while(num > 0)
    {
        digit = num%10;
        printf("%d ",digit);
        num = num/10;
    }
    
}
