#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("Number of units : %d\n",n);
    printf("Number of tens : %d\n",n/10);
    printf("Number of hundreds : %d\n",n/100);
    printf("Number of thousands : %d\n",n/1000);
}
