#include<stdio.h>

int main(){
    long int input,a=1,b=3,c=4,sum=a+b,i;
    scanf("%d",&input);
    if(input==1)
        printf("%d ",a);
    else if(input==2)
        printf("%d %d ",a,b);
    else
    {
        printf("%d %d %d ",a,b,c);
        for(i=4;i<=input;i++)
        {
            sum = a + b + c;
            printf("%ld ",sum);
            a=b;
            b=c;
            c=sum;
        }
    }
}
