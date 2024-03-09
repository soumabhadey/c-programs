#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void convert(int,long int *,int);
int main()
{
    clrscr();
    fflush(stdin);
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    long int num=0;
    int k=1;
    convert(n,&num,k);
    printf("binary equivalent=%ld",num);
    getch();
    return 0;
}
void convert(int n,long int *num,int k)
{
    int r;
    if(n!=0)
    {
        r=n%2;
        *num=r*k+ *num;
        convert(n/2,num,k*10);
    }
}