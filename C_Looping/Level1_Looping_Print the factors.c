#include<stdio.h>
int main()
{
    int num, ctr;
    scanf("%d",&num);
    for(ctr=1; ctr<=num; ctr+=1)
    {
        if(num%ctr==0)
            printf("%d ",ctr);
    }
}
