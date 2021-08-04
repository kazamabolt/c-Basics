#include <stdio.h>

int main(void) {
    int l1,l2,l3,l4;
    scanf("%d %d %d %d",&l1,&l2,&l3,&l4);
    if(l1 > l2 && l1 > l3 && l1 > l4)
        printf("%d",l1);
    else if(l2 > l3 && l2 > l4)
        printf("%d",l2);
    else if(l3 > l4)
        printf("%d",l3);
    else
        printf("%d",l4);
    return 0;
}
