#include <stdio.h>
int countFibs(int low, int high)
{
    int f1 = 0, f2 = 1, f3 = 1;
 
    int result = 0;
 
    while (f1 <= high)
    {
        if (f1 >= low)
        {
            printf("%d ",f1);
        }
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }

}
 
int main()
{
int low,high;
scanf("%d %d",&low,&high);
countFibs(low, high);
return 0;
}
