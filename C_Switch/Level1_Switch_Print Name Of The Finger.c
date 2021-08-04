#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    if(a==1)
    {
       printf("Left Thumb");
    }
    else if(a==2)
    {
      printf("Left Index Finger");
    }
    else if(a==3)
    {
      printf("Left Middle Finger");
    }
    else if(a==4)
    {
      printf("Left Ring Finger");
    }
    else if(a==5)
    {
      printf("Left Little Finger");
    }
    else if(a==6)
    {
       printf("Right Thumb");
    }
    else if(a==7)
    {
       printf("Right Index Finger");
    }
    else if(a==8)
    {
        printf("Right Middle Finger");
    }
    else if(a==9)
    {
       printf("Right Ring Finger");
    }
    else if(a==10)
    {
      printf("Right Little Finger");
    }
    
    else
    printf("Invalid Input");
}
