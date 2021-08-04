#include<stdio.h>
void main()
{
    int first,last,index;
    scanf("%d %d",&first,&last);
    for(index = first;index<=last;index++)
    {
        if(index%3==0 &&index%5==0)
        {
            printf("FineMind ");
        }
        else if(index%3==0)
        {
            printf("Fine ");
        }
        else if(index%5==0)
        {
            printf("Mind ");
        }
    }
}
