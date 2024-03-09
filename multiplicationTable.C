#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	unsigned int n,i,pro;
	clrscr();
	fflush(stdin);
	while(1)
	{
		printf("Enter a number or enter 0 to stop\n");
		scanf("%u",&n);
		if(n==0)
		break;
		printf("Multiplication table of %u\n",n);
		for(i=1;i<=10;i++)
		{
			pro=n*i;
			printf("%u * %u = %u\n",n,i,pro);
		}
		printf("\n");
	}
	printf("Enter any character to exit\n");
	getch();
	return 0;
}