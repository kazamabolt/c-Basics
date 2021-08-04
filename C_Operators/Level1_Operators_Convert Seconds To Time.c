#include<stdio.h>
int main()
{
    int tsec;
    int hh,mm,ss;
    scanf("%d",&tsec);
    hh=tsec/3600;
    mm=(tsec%3600)/60;
    ss=tsec-((hh*3600)+(mm*60));
    printf("%02d:%02d:%02d",hh,mm,ss);
}
