#include <stdio.h>
int countDigit(int n)
{
	int temp = n, count = 0;
	while (temp != 0) {
		int d = temp % 10;
		temp /= 10;
		if (d > 0 && n % d == 0)
			count++;
	}

	return count;
}

int main()
{
	int n;
    scanf("%d",&n);
	printf("%d",countDigit(n));
	return 0;
}
