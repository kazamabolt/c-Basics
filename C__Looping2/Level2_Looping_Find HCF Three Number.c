#include<stdio.h>
#include<stdlib.h>

int gcd(int m,int n)
{
        int rem;
        while(n!=0)
        {
                rem=m%n;
                m=n;
                n=rem;
        }
        return(m);
}

int main()
{
        int num1,num2,num3,gcd1,gcd2;

        
        scanf("%d",&num1);
        
        scanf("%d",&num2);
        
        scanf("%d",&num3);

        

        gcd1=gcd(num1,num2);
        gcd2=gcd(num3,gcd1);

        printf("%d",gcd2);

        return 0;
}
