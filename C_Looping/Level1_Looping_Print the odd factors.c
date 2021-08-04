#include<stdio.h>
int main()
{
    long long int num,ctrFact;
    scanf("%lld",&num);
    for(ctrFact=1; ctrFact<=num/2 ; ctrFact+=1)
    {
        if(num%ctrFact==0 && ctrFact%2==1)
        {
            printf("%lld ",ctrFact);
        }
    }

}
