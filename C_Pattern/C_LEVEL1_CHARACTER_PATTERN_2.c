#include<stdio.h>
void main() {
  int n,i,j;
  char alp[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%c ", alp[j]);
    }
    printf("\n");
  }
}
