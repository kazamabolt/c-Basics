#include <stdio.h>

int main(void) {
	
	int n, sum;
	scanf("%d",&n);
	sum =0;
	sum = n*(n+1)/2;
	printf("Sum of first %d numbers is %d",n,sum);
	return 0;
}
