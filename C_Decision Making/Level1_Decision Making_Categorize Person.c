#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a<150)
    printf("Dwarf");
    else if(a==150)
    printf("Average");
    else if(a>=165)
    printf("Tall");
}
