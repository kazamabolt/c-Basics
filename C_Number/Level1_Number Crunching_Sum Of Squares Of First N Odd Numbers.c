#include <stdio.h>
int main() {
   int n;
   int sum = 0;
   scanf("%d",&n);
   for (int i = 1; i <= n; i++)
      sum += (2*i - 1) * (2*i - 1);
   printf("%d", sum);
   return 0;
}
