#include <stdio.h>
#define MAX 100

int main(void) {
    int cid, units;
    char cname[MAX];
    double billAmt;
    scanf("%d",&cid);
    scanf("%s",cname);
    scanf("%d",&units);
    if(units < 200)
        billAmt = 1.20;
    else if(units >= 200 && units < 400)
        billAmt = 1.50;
    else if(units >= 400 && units < 600)
        billAmt = 1.80;
    else if(units >= 600)
        billAmt = 2.00;
    printf("Customer IDNO :%d\n", cid);
    printf("Customer Name :%s\n", cname);
    printf("unit Consumed :%d\n", units);
    printf("Amount Charges @Rs. %.2lf per unit :%.2lf\n",billAmt, units*billAmt);
    printf("Surcharge Amount :%.2lf\n", (units*billAmt > 400)? (units*billAmt)*0.15 : 0.00);
    if(billAmt*units > 400)
        printf("Net Amount Paid By the Customer :%.2lf", (units*billAmt)+(units*billAmt*0.15));
    else
        printf("Net Amount Paid By the Customer :%.2lf", (units*billAmt));
}
