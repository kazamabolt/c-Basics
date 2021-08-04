#include<stdio.h>
void main()
{
    long long int a=1, b=3, c=4, sum, i,arr[50],ctr=4,n;
    arr[1]=1;
    arr[2]=3;
    arr[3]=4;
    scanf("%lld",&n);
    for(i=4; i<=50; i++)
    {

        sum = a+b+c;
        arr[ctr++]=sum;
              a = b;
      b = c;
      c = sum;
    }
    printf("%lld",arr[n]);
}
