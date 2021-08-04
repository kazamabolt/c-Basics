#include <stdio.h>

int main(void) {
    int dd,mm,yyyy,rem=0;
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    if(dd < 0 || mm < 0 || mm > 13 || yyyy < 1920 || yyyy > 2100 || (mm == 2 && dd > 28))
        printf("Invalid Date");
    else {
        switch(mm) {
            case 1: rem += 31;
            case 2: rem += (yyyy%4==0&&yyyy%100!=0||yyyy%400==0)? 29 : 28;
            case 3: rem += 31;
            case 4: rem += 30;
            case 5: rem += 31;
            case 6: rem += 30;
            case 7: rem += 31;
            case 8: rem += 31;
            case 9: rem += 30;
            case 10: rem += 31;
            case 11: rem += 30;
            case 12: rem += 31;
        }
        printf("%d", rem - dd);
    }
}
