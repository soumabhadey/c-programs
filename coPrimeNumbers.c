#include <stdio.h>
#include <stdlib.h>
int areCoPrimes(int,int);
int main()
{
	fflush(stdin);
	int n;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Co-Prime numbers\n");
	int i,j;
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(areCoPrimes(i,j))
				printf("%d , %d\n",i,j);
	return 0;
}
int areCoPrimes(int m,int n)
{
	int c=0,i;
	for(i=1;i<=m;i++)
		if(m%i==0&&n%i==0)
			c++;
	return c==1;
}