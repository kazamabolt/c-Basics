#include<stdio.h>
#include<math.h>
int main()
{
    int num,ctr;
    scanf("%d",&num);
    int until = floor(sqrt(num));
    int until1 = ceil(sqrt(num));
    for(ctr=1; ctr<until ; ctr+=1)
    {
        if(num%ctr==0){
        printf("%d,%d\n",ctr,num/ctr);
        }
    }
    if(until1 == until)
    {
        printf("%d",until1);
    }
}
