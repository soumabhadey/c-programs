#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void calc(float *,float *);
int main()
{
    clrscr();
    fflush(stdin);
    float avg,percent;
    calc(&avg,&percent);
    printf("average=%f\npercentage=%f\n",avg,percent);
    getch();
    return 0;
}
void calc(float *avg,float *percent)
{
    int m1,m2,m3;
    printf("enter marks in 3 subjects\n");
    scanf("%d%d%d",&m1,&m2,&m3);
    *avg=(m1+m2+m3)/3.0;
    *percent=(m1+m2+m3)*100.0/300;
}