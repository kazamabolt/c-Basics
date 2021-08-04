#include<stdio.h>
void main()
{
    char character;
    int times;
    scanf("%c %d",&character,&times);
    int index=1;
    if(character=='U' || character=='u')
    {
        
        while(index<=times)
        {
            printf("A E I O U ");
            index++;
        }
    }
    else if(character == 'L' || character == 'l')
    {
        
        while(index<=times)
        {
            
            printf("a e i o u ");    
            index++;
        
        }
    }

}
