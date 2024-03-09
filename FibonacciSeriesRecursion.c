#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void fibonacci(int *,int *,int *,int *);
int main()
{
    clrscr();
    fflush(stdin);
    int a=0,b=1,c=0,n;
    printf("enter terms\n");
    scanf("%d",&n);
    fibonacci(&n,&a,&b,&c);
    getch();
    return 0;
}
void fibonacci(int *term,int *a,int *b,int *c)
{
    if(*term==1)
        printf("%d",*c);
    else
    {
        printf("%d ",*c);
        *a=*b;
        *b=*c;
        *c=*a+*b;
        *term=*term-1;
        fibonacci(term,a,b,c);
    }
}