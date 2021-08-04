#include <stdio.h>

int main(void) {
    char c;
    scanf("%c",&c);
    if(c >= 65 && c <= 91 || c >= 97 && c <= 123)
        printf("Alphabet");
    else if(c >= 48 && c <= 57)
        printf("Digit");
    else
        printf("Special Character");
}
