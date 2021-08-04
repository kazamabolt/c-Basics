#include<stdio.h>

void main()
{
    int a;
    float b;

    scanf("%d",&a);

    if(a<=10000)
    {
        b=a+(0.2*a)+(0.8*a);
        printf("%.2f",b);

    }
    else if(a<=20000)
    {
        b=a+(0.25*a)+(0.9*a);
        printf("%.2f",b);
    }
    else{
        b=a+(0.3*a)+(0.95*a);
        printf("%.2f",b);
    }
}
