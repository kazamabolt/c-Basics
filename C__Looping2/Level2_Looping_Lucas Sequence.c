#include<stdio.h>
int main()
{
  long int first,temp,second,count,n;
  count=2;
  first=2;
  second=1;
  scanf("%ld",&n);  
  printf("%ld %ld ",first,second);
  while(count<n)
    {
      temp=second;
      second=first+second;
      first=temp;
      printf("%ld ",second);
      count++;
    }
  return 0;
}
