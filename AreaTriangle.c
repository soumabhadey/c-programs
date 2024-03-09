#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void compute(float *);
int main()
{
    clrscr();
    fflush(stdin);
    float area;
    compute(&area);
    printf("area=%f\n",area);
    getch();
    return 0;
}
void compute(float *area)
{
    int a,b,c;
    printf("enter 3 sides of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    float S=(a+b+c)/2.0;
    *area=sqrt(S*(S-a)*(S-b)*(S-c));
}