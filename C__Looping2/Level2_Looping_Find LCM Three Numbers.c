#include<stdio.h>

int main()

{

    long int a,b,c,i,j,gcd1,gcd2,lcm1,lcm2 ;
    scanf("\n%ld\n%ld\n%ld",&a,&b,&c);

    for(i=1;i<=a;i++)
    {

        if(a%i==0&&b%i==0)

            gcd1 = i ;
    }

    lcm1 = (a*b)/gcd1 ;

    for(j=1;j<=c;j++)

    {

        if(c%j==0&&lcm1%j==0)

        gcd2 = j ;
    }

    lcm2 = lcm1*c/gcd2 ;

    printf("%ld",lcm2);

}
