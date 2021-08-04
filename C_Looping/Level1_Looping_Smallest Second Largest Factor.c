#include <stdio.h>
#include <math.h>

int largest_divisor(int n) {
	int i;
	for (i = n / 2; i >= 1; --i) {
		if (n % i == 0)
			return i;
	}
	return 0;
}

int smallest_divisor(int n) {
	int i;
	for (i = 1; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return i;
		}
	}
	return n;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d %d",smallest_divisor(n), largest_divisor(n));
}
