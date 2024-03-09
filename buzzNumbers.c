#include <stdio.h>
#include <stdlib.h>
int main()
{
	fflush(stdin);
	int n;
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Buzz numbers\n");
	for(int i=1;i<=n;i++)
		if(i%7==0||i%10==7)
			printf("%d ",i);
	printf("\n");
	return 0;
}