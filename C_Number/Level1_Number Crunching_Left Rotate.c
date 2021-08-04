#include <stdio.h>
#include <math.h>

int main(void)
{
  long int num;
  scanf("%ld",&num);
  long int rem = num % (unsigned long)pow(10.0, (double)floor(log10(num))); 
  int Count = log10(num);
  int FirstDigit = num/ pow(10, Count);
  printf("%ld%d",rem,FirstDigit);

  return 0;
}
