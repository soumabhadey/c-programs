#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void sumNatural(int,int,int *);
int main()
{
    clrscr();
    fflush(stdin);
    int n;
    printf("enter number of terms\n");
    scanf("%d",&n);
    int i=1,sum=0;
    sumNatural(i,n,&sum);
    printf("sum of natural numbers=%d\n",sum);
    getch();
    return 0;
}
void sumNatural(int i,int n,int *sum)
{
    if(i<=n)
    {
        *sum=*sum+i;
        sumNatural(i+1,n,sum);
    }
}