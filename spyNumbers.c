#include <stdio.h>
#include <stdlib.h>
int isSpy(int);
int main()
{
	fflush(stdin);
	int n;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Spy numbers\n");
	for(int i=1;i<=n;i++)
		if(isSpy(i))
			printf("%d ",i);
	printf("\n");
	return 0;
}
int isSpy(int n)
{
	int sum=0,prod=1,r;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		prod=prod*r;
		n=n/10;
	}
	return sum==prod;
}