#include<stdio.h>
int main()
{
    int num,printVal=0,ctr;
    scanf("%d",&num);
    for(ctr=1 ; ctr<num ; ctr+=1)
    {
        if(ctr%2==0)
        {
            printVal+=ctr;
        }
    }
    printf("%d",printVal);
}
