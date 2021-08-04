#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
long int n,i=8,c=1;
scanf("%ld",&n);
while(c<=n)
{
    printf("%d ",c);
    c=c+i;
    if(c<=n)
      printf("%d ",c);
    c=c+i;
    i=i+8;
}
return 0;
}
