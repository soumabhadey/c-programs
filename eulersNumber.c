#include <stdio.h>
int main()
{
	float e=1,t=1;
	int i;
	for(i=1;;i++)
	{
		t=t/i;
		if(t<0.00001)
			break;
		e=e+t;
	}
	printf("Euler's number(e) = %f\n",e);
	return 0;
}