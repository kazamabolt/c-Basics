#include<stdio.h>

int main()
{
    long int input1,input2,count=0;
    scanf("%ld %ld",&input1,&input2);
    for(int i=0;i<input2;i++)
        count+=input1;
    printf("%ld",count);
}
