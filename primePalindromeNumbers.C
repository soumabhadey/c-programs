#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int prime(int);
int palindrome(int);
int main()
{
	clrscr();
	fflush(stdin);
	int n;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Pal-prime numbers\n");
	for(int i=1;i<=n;i++)
		if(prime(i)&&palindrome(i))
			printf("%d ",i);
	printf("\nEnter any character to exit\n");
	getch();
	return 0;
}
int prime(int n)
{
	int c=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			c++;
	return c==2;
}
int palindrome(int n)
{
	int dup=n,r,rev=0;
	while(dup!=0)
	{
		r=dup%10;
		rev=rev*10+r;
		dup=dup/10;
	}
	return rev==n;
}