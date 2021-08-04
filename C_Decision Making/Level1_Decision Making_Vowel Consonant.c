#include<stdio.h>
int main()
{
int c;
scanf("%c",&c);
c = (c >= 97 && c <= 123)? c-32 : c;
(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')?printf("Vowel") : printf("Consonant");

    return 0;
}
