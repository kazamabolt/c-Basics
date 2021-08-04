#include <stdio.h> 
#include <math.h>
void main()
{ 
    float a,b;
    scanf("%f %f",&a,&b);
    float a_frac = a - (int) a;
    float b_frac = b - (int) b;
    float frac_sum = a_frac + b_frac;
    printf("%.2f + %.2f = %.2f",a_frac,b_frac,frac_sum);
}
