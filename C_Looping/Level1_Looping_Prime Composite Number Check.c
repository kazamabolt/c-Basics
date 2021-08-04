#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
long long int n;
int i,isprime=0;
scanf("%lld",&n);
for(i=2;i<=sqrt(n);i++)
{
if(n%i==0)
{
    isprime=1;
    break;
}
}
if(isprime==0) printf("Prime");
else printf("Composite");
return 0;
}
