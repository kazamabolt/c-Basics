#include<stdio.h>

int main()
{
    char c;

    scanf("%c",&c);

    if(c>='A' && c<='E')
    {
        if(c=='A')
        printf("1.0.0.1 to 126.255.255.254");
        else if(c=='B')
        printf("128.1.0.1 to 191.255.255.254");
        else if(c=='C')
        printf("192.0.1.1 to 223.255.254.254");
        else if(c=='D')
        printf("224.0.0.0 to 239.255.255.255");
        else if(c=='E')
        printf("240.0.0.0 to 254.255.255.254");
    }
    else
    printf("Invalid Input");
}
