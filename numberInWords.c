#include <stdio.h>
int main()
{
	int n,dup,k,r;
	printf("Enter a number\n");
	scanf("%d",&n);
	dup=n;
	k=1;
	while(dup!=0)
	{
		k=k*10;
		dup=dup/10;
	}
	k=k/10;
	dup=n;
	while(k!=0)
	{
		r=dup/k;
		switch(r)
		{
			case 0:
				printf("ZERO ");
				break;
			case 1:
				printf("ONE ");
				break;
			case 2:
				printf("TWO ");
				break;
			case 3:
				printf("THREE ");
				break;
			case 4:
				printf("FOUR ");
				break;
			case 5:
				printf("FIVE ");
				break;
			case 6:
				printf("SIX ");
				break;
			case 7:
				printf("SEVEN ");
				break;
			case 8:
				printf("EIGHT ");
				break;
			case 9:
				printf("NINE ");
		}
		dup=dup%k;
		k=k/10;
	}
	printf("\n");
	return 0;
}
