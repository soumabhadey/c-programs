#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float l1,l2,g1,g2,d;
	puts("Enter latitude and longitude of place 1");
	scanf("%f%f",&l1,&g1);
	fflush(stdin);
	puts("Enter latitude and longitude of place 2");
	scanf("%f%f",&l2,&g2);
	d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
	printf("Distance = %fnautical miles\n",d);
	return 0;
}
