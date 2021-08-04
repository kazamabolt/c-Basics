#include<stdio.h>
int main()
{
char c;
scanf("%c",&c);
c = (c >= 97 && c <=123)? c-32 : c;
printf("%d", c-'A'+1);

    return 0;
}
