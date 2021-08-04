#include<stdio.h>
void main()
{
    long int range,num,index,sum=0;
    scanf("%ld %ld",&range,&num);
    for(index=0;index<=range;index+=num)
    {
        sum = sum + index;
    }
    printf("%ld",sum);

}
