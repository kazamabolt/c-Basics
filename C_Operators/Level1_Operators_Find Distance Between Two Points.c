#include <stdio.h>
#include <math.h>

int main() {
	float x1, y1, x2, y2, gdistance;
	scanf("%f %f %f %f", &x1,&x2,&y1,&y2);
	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance Between Two points : %.2f", sqrt(gdistance));
    return 0;
}

