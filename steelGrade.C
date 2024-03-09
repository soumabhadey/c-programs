#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	float h,c,t;
	int hard,carbon,tensile,grade;
	clrscr();
	puts("Enter hardness, carbon content and tensile strength");
	scanf("%f%f%f",&h,&c,&t);
	fflush(stdin);
	hard=h>50;
	carbon=c<0.7;
	tensile=t>5600;
	if(hard&&carbon&&tensile)
		grade=10;
	else if(hard&&carbon)
		grade=9;
	else if(carbon&&tensile)
		grade=8;
	else if(hard&&tensile)
		grade=7;
	else if(hard||carbon||tensile)
		grade=6;
	else
		grade=5;
	printf("Grade: %d\n",grade);
	getch();
	return 0;
}