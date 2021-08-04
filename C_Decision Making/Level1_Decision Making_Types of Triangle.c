#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a==90)||(b==90)||(c==90))
    printf("Right Angle");
    else if((a<90)&&(b<90)&&(c<90))
    printf("Acute");
    else
    printf("Obtuse");
}
