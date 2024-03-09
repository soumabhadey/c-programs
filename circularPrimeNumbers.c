#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isCircularPrime(int);
int numberOfDigits(int);
int isNotPrime(int);
int rotate(int);
int main()
{
	fflush(stdin);
	int n;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Circular prime numbers\n");
	for(int i=1;i<=n;i++)
		if(isCircularPrime(i))
			printf("%d ",i);
	printf("\n");
	return 0;
}
int isCircularPrime(int n)
{
	int c=numberOfDigits(n);
	for(int i=1;i<=c;i++)
	{
		if(isNotPrime(n))
		return 0;
		n=rotate(n);
	}
	return 1;
}
int numberOfDigits(int n)
{
	int c=0;
	while(n!=0)
	{
		c++;
		n=n/10;
	}
	return c;
}
int isNotPrime(int n)
{
	int c=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			c++;
	return c!=2;
}
int rotate(int n)
{
	int c=numberOfDigits(n);
	int k=pow(10,c-1);
	int a=n/k;
	int b=n%k;
	int num=b*10+a;
	return num;
}