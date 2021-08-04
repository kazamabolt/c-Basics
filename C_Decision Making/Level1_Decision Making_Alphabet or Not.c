#include<stdio.h>
int main()
{
int c;
scanf("%c",&c);
((c>=65 && c<=91 || (c>=97 && c<=123 ))?printf("Yes") : printf("No"));




    return 0;
}
