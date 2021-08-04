#include<stdio.h>
int main()
{
    char message[1024];
    scanf("%[^\n]s",&message);
    printf("\"%s\"",message);
}
