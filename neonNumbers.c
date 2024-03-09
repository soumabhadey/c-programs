#include <stdio.h>
#include <stdlib.h>
int isNeon(int);
int main()
{
	fflush(stdin);
	int n;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Neon numbers\n");
	for(int i=1;i<=n;i++)
		if(isNeon(i))
			printf("%d ",i);
	printf("\n");
	return 0;
}
int isNeon(int n)
{
	int sq=n*n,r,sum=0;
	while(sq!=0)
	{
		r=sq%10;
		sum=sum+r;
		sq=sq/10;
	}
	return sum==n;
}