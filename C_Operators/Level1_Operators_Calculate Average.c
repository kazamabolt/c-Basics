#include<stdio.h>
int main()
{
    double w1,i1,w2,i2,result;
    scanf("%lf%lf",&w1,&i1);
    scanf("%lf%lf",&w2,&i2);
    result=((w1*i1)+(w2*i2))/(i1+i2);
    printf("Average weight of the items : %.3lf",result);
}
