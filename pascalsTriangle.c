#include <stdio.h>
int factorial(int n)
{
	int f=1;
	while(n!=0)
	{
		f=f*n;
		n--;
	}
	return f;
}
int combination(int n,int r)
{
	return factorial(n)/(factorial(n-r)*factorial(r));
}
int main()
{
	int n,i,j;
	printf("Enter number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf("  ");
		for(j=1;j<=i;j++)
			printf("%d   ",combination(i-1,j-1));
		printf("\n");
	}
	return 0;
}
