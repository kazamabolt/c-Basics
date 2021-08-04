#include <stdio.h>

int isPerfect(int x) {
    for(int i=0; i*i<=x; i++) {
        if(i*i == x)
            return 1;
    }
    return 0;
}

int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=2,j=0;j<n;i++) {
        if(!isPerfect(i)) {
            printf("%d ", i);
            j++;
        }
    }
}
