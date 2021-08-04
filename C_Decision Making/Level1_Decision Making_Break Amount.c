#include <stdio.h>

int main(void) {
    int n, hundreds=0, fifties=0, twenties=0, tens=0, five=0, two=0;
    scanf("%d",&n);
    if(n>=100) {
        hundreds = n / 100;
        n %= 100;
    }
    if(n>=50) {
        fifties = n / 50;
        n %= 50;
    }
    if(n>=20) {
        twenties = n / 20;
        n %= 20;
    }
    if(n>=10) {
        tens = n / 10;
        n %= 10;
    }
    if(n>=5) {
        five = n / 5;
        n %= 5;
    }
    if(n>=2) {
        two = n / 2;
        n %= 2;
    }
    printf("%d Note(s) of 100.00\n",hundreds);
    printf("%d Note(s) of 50.00\n", fifties);
    printf("%d Note(s) of 20.00\n", twenties);
    printf("%d Note(s) of 10.00\n", tens);
    printf("%d Note(s) of 5.00\n", five);
    printf("%d Note(s) of 2.00\n", two);
    printf("%d Note(s) of 1.00", n);
}
