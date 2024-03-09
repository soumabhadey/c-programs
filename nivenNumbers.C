#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int isNiven(int);
int main()
{
	clrscr();
	fflush(stdin);
	int n;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Niven numbers\n");
	for(int i=1;i<=n;i++)
		if(isNiven(i))
			printf("%d ",i);
	printf("\nEnter any character to exit\n");
	getch();
	return 0;
}
int isNiven(int n)
{
	int dup=n,r,sum=0;
	while(dup!=0)
	{
		r=dup%10;
		sum=sum+r;
		dup=dup/10;
	}
	return n%sum==0;
}