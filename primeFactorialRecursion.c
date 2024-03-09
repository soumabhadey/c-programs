#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void primeFactorial(int,int);
int main()
{
    clrscr();
    fflush(stdin);
    int n;
    while(1)
    {
        printf("enter a number\n");
        scanf("%d",&n);
        if(n>=2)
            break;
        printf("invalid data\n");
    }
    int i=2;
    printf("prime factorial\n");
    primeFactorial(i,n);
    getch();
    return 0;
}
void primeFactorial(int i,int n)
{
    if(n!=1)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        else
            i=i+1;
        primeFactorial(i,n);
    }
    else
    return;
}