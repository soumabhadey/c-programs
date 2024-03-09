#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main()
{
	int done;
	struct ffblk a;
	clrscr();
	done=findfirst("*.*",&a,0);
	while(!done)
	{
		printf("%s\n",a.ff_name);
		done=findnext(&a);
	}
	getch();
	return 0;
}