#include<stdio.h>
int main()
{
    int num, ctrFact, count=0;
    scanf("%d",&num);
    for(ctrFact=1; ctrFact<=num/2; ctrFact+=1)
    {
        if(num%ctrFact==0)
        {
            count++;
        }
    }
    printf("%d",++count);
}
