#include<stdio.h>

int main() {
   int n, r, sml = 9, lar = 0;
   scanf("%d", &n);
   while (n > 0) {
       r = n % 10;
       if (sml > r) {
           sml = r;
       }
       if (lar < r) {
           lar = r;
       }
       n = n / 10;
   }
   printf("Largest digit is %d", lar);
   printf("\nSmallest digit is %d", sml);

   return 0;
}
