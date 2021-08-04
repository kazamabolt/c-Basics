#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    if(a<0)
    printf("Freezing Weather");
    else if(a>=0 && a<=10)
    printf("Very Cold Weather");
    else if(a>=11 && a<=20)
    printf("Cold Weather");
    else if(a>=21 && a<=30)
    printf("Normal Weather");
    else if(a>=31 && a<=40)
    printf("Hot Weather");
    else
    printf("Very Hot Weather");
}
