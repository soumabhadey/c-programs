#include <stdio.h>
int main()
{
	char i,j;
	int sp=5,k;
	for(i='A';i<='D';i++)
	{
		for(j='A';j<=i;j++)
			printf("%c ",j);
		for(k=1;k<=sp;k++)
			printf("  ");
		sp=sp-2;
		for(j=i;j>='A';j--)
			if(j!='D')
				printf("%c ",j);
		printf("\n");
	}
	return 0;
}
