#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=0&&b>=0)
    printf("The coordinate point (%d,%d) lies in the First quadrant.",a,b);
    else if(a>=0&&b<=0)
    printf("The coordinate point (%d,%d) lies in the Fourth quadrant.",a,b);
    else if(a<=0&&b<=0)
    printf("The coordinate point (%d,%d) lies in the Third quadrant.",a,b);
    else
    printf("The coordinate point (%d,%d) lies in the Second quadrant.",a,b);
    
    
    
}