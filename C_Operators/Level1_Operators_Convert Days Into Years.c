#include <stdio.h> 
int main()
{
    int totaldays, years, weeks,days;

    scanf("%d",&totaldays); 


    years = totaldays/365; 
    weeks = (totaldays % 365)/7;
    days = totaldays- ((years*365) + (weeks*7));

    printf("Number of Years : %d\n", years);
    printf("Number of Weeks : %d\n", weeks);
    printf("Number of Days : %d", days);

    return 0;
}
