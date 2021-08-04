#include<stdio.h>
#include<math.h>
int main()
{
    int num, ctr, until;
    scanf("%d",&num);
    until = floor(sqrt(num));
    for(ctr=1 ; ctr <= until ; ctr+=1)
    {
        if(num%ctr==0)
        {
            printf("%d,%d\n",ctr,num/ctr);
        }

    }
}
