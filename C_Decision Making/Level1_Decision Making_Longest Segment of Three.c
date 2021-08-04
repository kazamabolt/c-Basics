#include <stdio.h>

int main(void) {
    int l1,l2,l3;
    scanf("%d %d %d",&l1,&l2,&l3);
    if(l1 > l2) {
        if(l1 > l3) {
            printf("%d",l1);
        }else
            printf("%d",l3);
    }else if(l2 > l1) {
        if(l2 > l3) {
            printf("%d", l2);
        }else
            printf("%d",l3);
    }
    return 0;
}
