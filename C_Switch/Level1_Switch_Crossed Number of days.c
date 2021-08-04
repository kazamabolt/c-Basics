#include<stdio.h> 
#include<stdlib.h>
void main() 
{ 
 int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

 int date, mon, year, i;  
int sum=0;

 scanf("%d/%d/%d",&date,&mon,&year) ; 
if((year % 400 == 0)||((year % 4 == 0) && (year % 100 == 0))) 
  month[1] = 29 ; 
 for(i =0 ; i<mon; i++) {
    sum+=month[i];
  }
  
int temp=month[mon-1]-date;
 sum-=temp;
 if(year==1989||year==1990){
    sum--;
  }
 printf("%d",sum) ; 
}
