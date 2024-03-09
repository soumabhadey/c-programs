#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void calculate(int *);
int main()
{
    clrscr();
    fflush(stdin);
    int gcd;
    calculate(&gcd);
    printf("GCD = %d",gcd);
    getch();
    return 0;
}
void calculate(int *gcd)
{
    int m,n;
    printf("Enter two numbers\n");
    scanf("%d%d",&m,&n);
    int dividend,divisor,quo,rem;
    if(m>n)
    {
        dividend=m;
        divisor=n;
    }
    else
    {
        dividend=n;
        divisor=m;
    }
    quo=dividend/divisor;
    while(dividend-quo*divisor!=0)
    {
        rem=dividend-quo*divisor;
        dividend=divisor;
        divisor=rem;
        quo=dividend/divisor;
    }
    *gcd=divisor;
}