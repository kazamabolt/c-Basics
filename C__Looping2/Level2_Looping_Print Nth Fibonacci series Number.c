#include<stdio.h>
int main()
{
long long int n, t1 = 0, t2 = 1, nextTerm = 0, i;

scanf("%lld", &n);
if(n == 0 || n == 1) 
printf("%lld", n); 
else
nextTerm = t1 + t2;
for (i = 3; i <= n; ++i)
{
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
printf("%lld", nextTerm);
}
