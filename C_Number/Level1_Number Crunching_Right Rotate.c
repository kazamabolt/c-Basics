#include <stdio.h>
#include <math.h>

int main(void)
{
  long int num;
  scanf("%ld",&num);
  int swap = 1, other;
  long int rem = num % (int)(pow(10,swap)); 
  other = log10(num-rem)+1-swap; 
  num = rem*(int)pow(10,other) + (num-rem)/(int)pow(10,swap);
  printf("%ld",num);

  return 0;
}
