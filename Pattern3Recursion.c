/*    1
     123
    12345   */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void spaceDisplay(int,int);
void rowDisplay(int,int);
void mainDisplay(int,int,int);
int main()
{
    clrscr();
    fflush(stdin);
    int n;
    printf("enter number of lines\n");
    scanf("%d",&n);
    int i=1,sp=n-1,limit=n*2-1;
    mainDisplay(i,sp,limit);
    getch();
    return 0;
}
void mainDisplay(int i,int sp,int limit)
{
    int j;
    if(i<=limit)
    {
        j=1;
        spaceDisplay(j,sp);
        j=1;
        rowDisplay(j,i);
        printf("\n");
        mainDisplay(i+2,sp-1,limit);
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
void rowDisplay(int j,int i)
{
    if(j<=i)
    {
        printf("%d",j);
        rowDisplay(j+1,i);
    }
}