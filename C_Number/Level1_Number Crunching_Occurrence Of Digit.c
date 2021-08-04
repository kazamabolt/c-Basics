#include <stdio.h>
#include <stdlib.h>
int main()
{
    long num;
    int digit,rem,count=0;
    scanf("%ld %d",&num,&digit);
    while(num!=0)
    {
       rem=num%10;
       if(rem==digit)
       count++;
       num=num/10;
    }
    printf("%d",count);
}
