#include<stdio.h>
#include<math.h>
void main()
{
    int num;
    scanf("%d",&num);
    int n;
    for(int j =1;j<=num;j++)
    { 
        n = j;
        int sum = 0;

        for(int i = 1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(n/i == i)
                {
                    sum = sum + i;
                }
                else 
                {
                    sum = sum + i;
                    sum = sum + (n/i);
                }
            }
        }
       sum = sum - n;
       if(sum < n)
       {
           printf("%d ",n);
       }
    }
}
