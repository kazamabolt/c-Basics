#include<stdio.h>  
  
int main()  
{  
    int n1, n2, min, count, flag = 1;  
  
    
    scanf("%d%d", &n1, &n2);  
  
    min = n1 < n2 ? n1 : n2;  
  
    for(count = 2; count <= min; count++)  
    {  
        if( n1 % count == 0 && n2 % count == 0 )  
        {  
            flag = 0;  
            break;  
        }  
    }  
  
    if(flag)  
    {  
        printf("CoPrime");  
    }  
    else  
    {  
        printf("-1");  
    }  
  
    return 0;   
}
