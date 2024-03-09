#include <stdio.h>
int isPrime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
		if(n%i==0)
			c++;
	return c==2;
}
void primeFactors(int n)
{
	int i;
	printf("Prime factors\n");
	for(i=1;i<=n;i++)
		if(n%i==0&&isPrime(i))
			printf("%d\n",i);
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	primeFactors(n);
	return 0;
}
