#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a == b && b == c)
        printf("Equilateral");
    else if(a != b && b != c && c!= a)
        printf("Scalene");
    else
        printf("Isosceles");
}
