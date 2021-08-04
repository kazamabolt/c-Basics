#include <stdio.h>
void triangular_series(int n)
{
    int i, j = 1, k = 1;
    for (i = 1; i <= n; i++) {
        printf("%d ", k);
        j = j + 1; 
        k = k + j;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    triangular_series(n);
    return 0;
}
