# include <stdio.h>
# include <stdlib.h>
int main()
{
	int n,a=1,b=0,c,end;
	scanf("%d",&end);
    c=0;
    printf("%d ",c);
    for(n=1; n<100; n++)
     {
      c= a + 2*b;
      if(c>end)
        break;
        printf("%d ",c);
      a = b;
      b = c;
     }
}
