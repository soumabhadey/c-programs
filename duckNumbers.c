#include <stdio.h>
#include <conio.h>
int isDuck(int);
int main()
{
	fflush(stdin);
	int n;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Duck numbers\n");
	for(int i=1;i<=n;i++)
		if(isDuck(i))
			printf("%d ",i);
	printf("\n");
	return 0;
}
int isDuck(int n)
{
	int r;
	while(n!=0)
	{
		r=n%10;
		if(r==0)
			return 1;
		n=n/10;
	}
	return 0;
}