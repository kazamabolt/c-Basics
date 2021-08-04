#include<stdio.h>
int main()
{
    int id,hour,amount;
    scanf("%d%d%d",&id,&hour,&amount);
    printf("Employee ID = %d\n",id);
    printf("Salary per month = %d",hour*amount);
}
