#include<stdio.h>

int main()
{
    long int input1,input2,result=1,i;
    scanf("%d %d",&input1,&input2);

    for(i=0;i<input2;i++)
    {
        result*=input1;
    }
    printf("%ld",result);
}
