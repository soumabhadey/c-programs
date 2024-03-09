#include <stdio.h>
#include <conio.h>
int main()
{
	unsigned int x=1189,y=841,i,temp;
	clrscr();
	for(i=0;i<=8;i++)
	{
		printf("A%u = %umm * %umm\n",i,x,y);
		temp=x/2;
		x=y;
		y=temp;
	}
	getch();
	return 0;
}