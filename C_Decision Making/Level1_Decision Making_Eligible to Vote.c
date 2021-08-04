#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Congratulation! You are eligible for casting your vote");
    }
    else
    {
        printf("Oops! You are not eligible");
    }
    return 0;
}
