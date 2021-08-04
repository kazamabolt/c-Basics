#include<stdio.h>
int main()
{
    int num,first;
    scanf("%d",&num);
    for(first=1;first<=num;first++)
	{
        if(first%2==0)
        {
		printf("%d ",first);
        }
	}
    return 0;
}
