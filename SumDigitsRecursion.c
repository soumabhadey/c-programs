#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void sumOfDigits(int *,int);
int main()
{
    clrscr();
    fflush(stdin);
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int sum=0;
    sumOfDigits(&sum,n);
    printf("sum of digits=%d\n",sum);
    getch();
    return 0;
}
void sumOfDigits(int *sum,int n)
{
    if(n<=9)
        *sum=*sum+n;
    else
    {
        *sum=*sum+n%10;
        sumOfDigits(sum,n/10);
    }
}