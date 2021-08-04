#include <stdio.h>
int countDigit(int n)
{
	int temp = n, count = 0;
	while (temp != 0) {
		int d = temp % 10;
		temp /= 10;
		if (d == 2 || d == 3 || d == 5 || d == 7)
			count++;
	}

	return count;
}

int main()
{
	int n;
    scanf("%d",&n);
	printf("Prime count : %d",countDigit(n));
	return 0;
}
