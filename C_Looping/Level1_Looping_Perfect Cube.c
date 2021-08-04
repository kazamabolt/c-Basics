#include<stdio.h>

int main()
{
    int input,flag=0;
    scanf("%d",&input);

    for(int i=1;i<input/2;i++)
        if(i*i*i == input){
            flag = 1;
            printf("Yes");
            break;
        }
    if(flag==0)
        printf("No");
}
