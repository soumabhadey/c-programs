#include <stdio.h>
#include <stdlib.h>
int automorphic(int);
int counter(int);
int main()
{
	fflush(stdin);
	int n;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Automorphic numbers\n");
	for(int i=1;i<=n;i++)
		if(automorphic(i))
			printf("%d ",i);
	printf("\n");
	return 0;
}
int automorphic(int n)
{
	int sq=n*n;
	int k=counter(n);
	int num=sq%k;
	return num==n;
}
int counter(int n)
{
	int k=1;
	while(n!=0)
	{
		k=k*10;
		n=n/10;
	}
	return k;
}