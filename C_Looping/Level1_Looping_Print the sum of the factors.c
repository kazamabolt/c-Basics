#include<stdio.h>
int main()
{
    int num, sum =0 ,count, ctrFact;
    scanf("%d",&num);
    for(ctrFact=1; ctrFact<=num/2; ctrFact+=1)
    {
        if(num%ctrFact==0)
        {
            sum += ctrFact;
        }
    }
    printf("%d",num+sum);
}
