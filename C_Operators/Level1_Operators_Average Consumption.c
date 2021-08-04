#include<stdio.h>
int main()
{
    double km,lt;
    double average;
    scanf("%lf%lf",&km,&lt);
    average=km/lt;
    printf("Average consumption (km/lt) = %.2lf",average);
}
