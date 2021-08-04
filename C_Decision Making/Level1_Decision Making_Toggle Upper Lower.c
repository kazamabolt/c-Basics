#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
c = (c >= 65 && c <= 91)? c+32 : c-32;
printf("%c",c);
    return 0;
}
