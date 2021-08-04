#include<stdio.h>
int main()
{
    int a,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    scanf("%d",&a);
    n1=a/1;
    n2=a%1;
    n3=a/10;
    n4=a%10;
    n5=a/100;
    n6=a%100;
    n7=a/1000;
    n8=a%1000;
    n9=a/10000;
    n10=a%10000;
    printf("%d/1 = %d\n",a,n1);
    printf("%d%1 = %d\n",a,n2);
    printf("%d/10 = %d\n",a,n3);
    printf("%d%10 = %d\n",a,n4);
    printf("%d/100 = %d\n",a,n5);
    printf("%d%100 = %d\n",a,n6);
    printf("%d/1000 = %d\n",a,n7);
    printf("%d%1000 = %d\n",a,n8);
    printf("%d/10000 = %d\n",a,n9);
    printf("%d%10000 = %d\n",a,n10);


}
