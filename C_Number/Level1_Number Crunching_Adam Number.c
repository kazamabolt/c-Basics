#include<stdio.h>
#include<math.h>
void main()
{
    long long int r,p,m,b,n,rev,a,c,i,z;
    r=0;
    rev=0;
    scanf("%lld",&z);
    n=z;
    c=n*n;
    while(n!=0)
    {
        m=n%10;
        r=r*10+m;
        n=n/10;
    }
    p=r*r;   
    while(c!=0)
    {
        a=c%10;
        rev=rev*10+a;
        c=c/10;
    }
    if(z%10!=0 && rev ==p)
        printf("ADAM NUMBER");
    else
        printf("NOT ADAM NUMBER");
}
