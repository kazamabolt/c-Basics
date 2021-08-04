#include<stdio.h>
int main()
{
    char c;
    int n1;
    long int n2;
    long long int n3;
    float d;
    scanf("%c\n%d\n%ld\n%lld\n%f",&c,&n1,&n2,&n3,&d);
    printf("%c\n%d\n%ld\n%lld\n%.3f",c,n1,n2,n3,d);
}
