#include <stdio.h>
#include <stdlib.h>
float max(float a,float b)
{
	return a>b?a:b;
}
int main()
{
	int r,g,b;
	float w,c,m,y,k;
	puts("Enter R-G-B values");
	printf("R = ");
	scanf("%d",&r);
	fflush(stdin);
	printf("G = ");
	scanf("%d",&g);
	printf("B = ");
	scanf("%d",&b);
	if(r==0&&g==0&&b==0)
	{
		c=m=y=0;
		k=1;
	}
	else
	{
		w=max(r/255.0,max(b/255.0,c/255.0));
		c=(w-r/255.0)/w;
		m=(w-g/255.0)/w;
		y=(w-b/255.0)/w;
		k=1-w;
	}
	puts("C-M-Y-K values");
	printf("C = %f\nM = %f\nY = %f\nK = %f\n",c,m,y,k);
	return 0;
}