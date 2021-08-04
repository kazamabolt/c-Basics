#include <stdio.h>

int isFactorial(int n)
{
  for (int i = 1;; i++) {
    if (n % i == 0) {
      n /= i;
    }
    else {
      break;
    }
  }
 
  if (n == 1) {
    return 1;
  }
  else {
    return 0;
  }
}
 
int main()
{
  int n,ans;
  scanf("%d",&n);
  ans = isFactorial(n);
  if (ans == 1) {
    printf("Yes");
  }
  else {
    printf("No");
  }
 
  return 0;
}
