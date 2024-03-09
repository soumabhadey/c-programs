#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int isHappy(int);
int sumSquareDigits(int);
int main()
{
	int n,i;
	clrscr();
	fflush(stdin);
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Happy numbers\n");
	for(i=1;i<=n;i++)
		if(isHappy(i))
			printf("%d ",i);
	printf("\nEnter any character to exit\n");
	getch();
	return 0;
}
int isHappy(int n)
{
	while(n!=1&&n!=4)
		n=sumSquareDigits(n);
	return n==1;
}
int sumSquareDigits(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r;
		n=n/10;
	}
	return sum;
}