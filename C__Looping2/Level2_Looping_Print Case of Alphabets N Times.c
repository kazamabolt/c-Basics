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
            int a = 'A';
            while(a<='Z')
            {
                printf("%c ",a);
                a++;
            }
            index++;
        }
    }
    else if(character == 'L' || character == 'l')
    {
        
        while(index<=times)
        {
            int a = 'a';
            while(a<='z')
            {
                printf("%c ",a);
                a++;
            }
                
            index++;
        
        }
    }

}

