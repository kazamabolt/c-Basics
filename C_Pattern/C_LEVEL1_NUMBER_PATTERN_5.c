#include<stdio.h>
    int main()
    {
        int n,temp=0;
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<temp; j++)
                printf(" ");
            
            for(int j=i;j<=n;j++)
                printf("%d ",j);

            temp+=2;
            printf("\n");
        }

    }
