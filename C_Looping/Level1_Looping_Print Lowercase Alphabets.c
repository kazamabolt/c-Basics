#include<stdio.h>
int main()
{
    int num, ctr;
    scanf("%d",&num);
    for(ctr=num ; ctr<=122; ctr+=1)
    {
        printf("%c ",ctr);
    }
}
