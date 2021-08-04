#include<stdio.h>
int main()
{
    int num, ctrFact, sum = 0;
    scanf("%d",&num);
    for(ctrFact=1; ctrFact<=num/2; ctrFact+=1)
    {
        if(num%ctrFact==0)
        {
            sum += ctrFact;
        }
    }
    
       // printf("%d is a %s",?(num,"perfect number"):(num,"not a perfect number"));
        if(sum == num)
        {
            printf("%d is a perfect number",num);
        }
        else
        {
            printf("%d is not a perfect number",num);
        }
}
