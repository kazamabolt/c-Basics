#include<stdio.h>
void emirp(int n)
{
	int m=0,c=0,tmp,i;
	tmp=n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==2)
	{

		while(tmp>0)
		{
			m=m*10+(tmp%10);
			tmp=tmp/10;
		}
		c=0;
		for(i=1;i<=m;i++)
		{
			if(m%i==0)
				c++;
		}
		if(c==2)
			printf("EMIRP NUMBER");
		else
			printf("NOT EMIRP NUMBER");
	}
	else
		printf("NOT EMIRP NUMBER");
}

int main()
{
	int n;

	scanf("%d",&n);
	emirp(n);
}
