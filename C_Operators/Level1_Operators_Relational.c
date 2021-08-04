#include<stdio.h>
void main()
{
     int x,y;
    scanf("%d%d",&x,&y);
  
    printf("%d < %d is %d\n",x,y,x<y);
    printf("%d > %d is %d\n",x,y,x>y);
    printf("%d <= %d is %d\n",x,y,x<=y);
    printf("%d >= %d is %d\n",x,y,x>=y);
    printf("%d != %d is %d\n",x,y,x!=y);
    printf("%d == %d is %d",x,y,x==y);
}
