/*    1
     121
    12321   */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void spaceDisplay(int,int);
void rowDisplay_1(int,int);
void rowDisplay_2(int);
void mainDisplay(int,int,int);
int main()
{
    clrscr();
    fflush(stdin);
    int n;
    printf("enter number of lines\n");
    scanf("%d",&n);
    int i=1,sp=n-1;
    mainDisplay(i,n,sp);
    getch();
    return 0;
}
void mainDisplay(int i,int n,int sp)
{
    int j;
    if(i<=n)
    {
        j=1;
        spaceDisplay(j,sp);
        j=1;
        rowDisplay_1(j,i);
        j=i-1;
        rowDisplay_2(j);
        printf("\n");
        mainDisplay(i+1,n,sp-1);
    }
}
void spaceDisplay(int j,int sp)
{
    if(j<=sp)
    {
        printf(" ");
        spaceDisplay(j+1,sp);
    }
}
void rowDisplay_1(int j,int i)
{
    if(j<=i)
    {
        printf("%d",j);
        rowDisplay_1(j+1,i);
    }
}
void rowDisplay_2(int j)
{
    if(j>=1)
    {
        printf("%d",j);
        rowDisplay_2(j-1);
    }
}