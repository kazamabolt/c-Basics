#include <stdio.h>

int main()
{
    float basic, da, hra;
    int gross;
    scanf("%f", &basic);
    da  = basic * 0.4;
    hra = basic * 0.2;
    gross = basic + hra + da;

    printf("Gross Salary is %d", gross);

    return 0;
}
