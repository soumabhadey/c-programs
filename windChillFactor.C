#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float t,v,wcf;
	clrscr();
	puts("Enter temperature and wind velocity");
	scanf("%f%f",&t,&v);
	fflush(stdin);
	wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
	printf("Wind-chill factor = %f\n",wcf);
	getch();
	return 0;
}