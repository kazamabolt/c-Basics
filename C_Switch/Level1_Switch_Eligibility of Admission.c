#include <stdio.h>
void main()
{  int p,c,m;
   scanf("%d%d%d",&m,&p,&c);
   if (m>=65)
         if(p>=55)
             if(c>=50)
                if((m+p+c)>=180)
                   printf("Eligible for admission");
                else
                  printf("Not eligible for admission");
             else
            printf("Not eligible for admission");
         else
           printf("Not eligible for admission");
    else
     printf("Not eligible for admission");
}
