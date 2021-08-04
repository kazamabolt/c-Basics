#include<stdio.h> 

int main(void)
{       
    long long int num, rem, prod = 1;
    scanf("%lld", &num);
    while(num != 0)
    {
        rem = num % 10; 
        prod *= rem; 
        num /=  10;  
    }
    printf("%lld", prod);

    return 0; 
}
