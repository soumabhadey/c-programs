//Standard deviation
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
int main()
{
	int n,i;
	float arr[MAX],sum,mean,var,sdev;
	clrscr();
	puts("Enter number of items");
	scanf("%d",&n);
	fflush(stdin);
	sum=0;
	puts("Enter items");
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	mean=sum/n;
	sum=0;
	for(i=0;i<n;i++)
		sum+=pow(arr[i]-mean,2);
	var=sum/n;
	sdev=sqrt(var);
	printf("Standard deviation=%f\n",sdev);
	getch();
	return 0;
}