#include <stdio.h>
int main()
{
    int input;
    scanf("%d",&input);
    int a=1,b=1,c=a+b;

    if(input==1)
        printf("%d",a);
    else{
    printf("%d %d ",a,b);

    for(int i=3;c<input;i++)
    {
        
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    }
}
