# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>


bool chkHarshad(int n)
{
    int s = 0;
	int tmp;
    for (tmp=n; tmp>0; tmp /= 10)
        s += tmp % 10;
    return (n%s == 0);
}
int main()
{
    int hdno;
	scanf("%d",&hdno);
 
     if( chkHarshad(hdno))
	printf("HARSHAD NUMBER");
    else
	printf("NOT HARSHAD NUMBER");
    return 0;
}
