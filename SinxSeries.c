#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void factorial(int *,int);
void compute(float *);
int main()
{
    clrscr();
    fflush(stdin);
    float S;
    compute(&S);
    printf("sin(x)=%f",S);
    getch();
    return 0;
}
void compute(float *S)
{
    int x;
    printf("enter x\n");
    scanf("%d",&x);
    *S=0.0;
    int f;
    for(int term=1,i=1;term<=10;term++,i=i+2)
    {
        factorial(&f,i);
        if(term%2==0)
            *S=*S-pow(x,i)/(f*1.0);
        else
            *S=*S+pow(x,i)/(f*1.0);
    }
}
void factorial(int *f,int i)
{
    *f=1;
    for(int j=i;j>=1;j--)
        *f=*f*j;
}