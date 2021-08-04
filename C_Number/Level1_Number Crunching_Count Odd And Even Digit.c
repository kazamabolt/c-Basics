#include<stdio.h>
void main() {
  int nodd,neven,num,digit;
  scanf("%d",&num);
  nodd = neven =0; 
  while (num > 0) {
   digit = num % 10; 
   if (digit % 2 == 1)
     nodd++;
   else neven++;
   num /= 10; 
 }
 printf("Odd count : %d\nEven count : %d", nodd, neven);
}
