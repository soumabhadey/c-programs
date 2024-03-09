#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void swap(int *,int *,int *);
int main()
{
    clrscr();
    fflush(stdin);
    int x,y,z;
    printf("enter\nx=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    printf("z=");
    scanf("%d",&z);
    printf("before swap\nx=%d, y=%d, z=%d\n",x,y,z);
    swap(&x,&y,&z);
    printf("after circular right swap\nx=%d, y=%d, z=%d\n",x,y,z);
    getch();
    return 0;
}
void swap(int *x,int *y,int *z)
{
    int temp=*z;
    *z=*y;
    *y=*x;
    *x=temp;
}