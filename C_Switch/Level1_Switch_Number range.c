#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    if(a>=0  &&  a<=9)
    printf("%d is in the range [0-9]",a);
    else if(a>=10 && a<=19)
    printf("%d is in the range [10-19]",a);
    else if(a>=21 && a<=29)
    printf("%d is in the range [20-29]",a);
    else if(a>=30 && a<=39)
    printf("%d is in the range [30-39]",a);
    else if(a>=40 && a<=49)
    printf("%d is in the range [40-49]",a);
    else if(a>=50 && a<=59)
    printf("%d is in the range [50-59]",a);
    else if(a>=60 && a<=69)
    printf("%d is in the range [60-69]",a);
    else if(a>=70 && a<=79)
    printf("%d is in the range [70-79]",a);
    else if(a>=80 && a<=89)
    printf("%d is in the range [80-89]",a);
    else if(a>=90 && a<=99)
    printf("%d is in the range [90-99]",a);
}
