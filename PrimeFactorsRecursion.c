#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int isPrime(int,int,int);
void primeFactors(int,int);
int main()
{
    clrscr();
    fflush(stdin);
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("prime factors\n");
    primeFactors(n,2);
    getch();
    return 0;
}
void primeFactors(int n,int i)
{
    if(i==n)
    {
        if(isPrime(i,1,0))
            printf("%d\n",i);
    }
    else
    {
        if(n%i==0&&isPrime(i,1,0))
            printf("%d\n",i);
        primeFactors(n,i+1);
    }
}
int isPrime(int n,int i,int c)
{
    if(i>n)
    return c==2;
    else
    {
        if(n%i==0)
            c=c+1;
        return isPrime(n,i+1,c);
    }
}