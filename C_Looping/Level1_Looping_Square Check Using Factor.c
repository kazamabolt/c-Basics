#include <stdio.h>

int main()
{
    int input,flag=0;
    scanf("%d",&input);
    
    for(int i=2;i<input;i++)
        if((i*i)==input){
            flag=1;
            break;
        }
    printf((flag==0)?"Not a Square Number":"Square Number");        
}
