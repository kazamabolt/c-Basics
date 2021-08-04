#include<stdio.h>

int main()
{
    int input1,input2;
    char op;
    scanf("%d %d\n%c",&input1,&input2,&op);

    switch(op)
    {
        case '+':
            printf("%d",input1+input2);
            break;
        case '-':
            printf("%d",input1-input2);
            break;
        case '*':
            printf("%d",input1*input2);
            break;
        case '/':
            printf("%d",input1/input2);
            break;
    }
}
