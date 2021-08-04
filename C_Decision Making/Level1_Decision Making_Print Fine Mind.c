#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n%3==0 && n%5==0)
    printf("Fine Mind");
    else if(n%3==0)
    printf("Fine");
    else if(n%5==0)
    printf("Mind");
    return 0;
}
