#include <stdio.h>

unsigned long power(int b, int e) {
    unsigned long v=1,i;
    for(i=0;i<e;i++) 
        v *= b;
    return v;
}

int countDigits(unsigned long n) {
    int i=0;
    while(n) {
        n /= 10;
        i++;
    }
    return i;
}

unsigned long rightRotate(unsigned long n, int digits) {
    int rem = n % 10;
    unsigned long b = power(10, digits-1);
    n /= 10;
    return rem * b + n; 
}

int main(void) {
    unsigned long num,rot;
    int d;
    scanf("%lu",&num);
    rot = num;
    d = countDigits(num);
    for(int i=0; i<d-1; i++) {
        rot = rightRotate(rot, d);
        printf("%d\n",rot);
    }
}
