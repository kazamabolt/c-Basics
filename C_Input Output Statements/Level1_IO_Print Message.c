#include<stdio.h> 
int main(){ 
	char str[1024]; 
	scanf ("%[^\n]%*c", str); 
	printf("%s",str); 
} 
