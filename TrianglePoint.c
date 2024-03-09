//program to check whether a point P lies inside triangle ABC
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void compute_distance(float *,int,int,int,int);
void compute_area(float *,int,int,int,int,int,int);
int inside_triangle();
int main()
{
    clrscr();
    fflush(stdin);
    if(inside_triangle())
        printf("point P lies inside triangle ABC\n");
    else
        printf("point P lies outside triangle ABC\n");
    getch();
    return 0;
}
int inside_triangle()
{
    int x1,y1,x2,y2,x3,y3,x,y;
    printf("enter coordinates of point A\n");
    scanf("%d%d",&x1,&y1);
    printf("enter coordinates of point B\n");
    scanf("%d%d",&x2,&y2);
    printf("enter coordinates of point C\n");
    scanf("%d%d",&x3,&y3);
    printf("enter coordinates of point P\n");
    scanf("%d%d",&x,&y);
    float area,area1,area2,area3;
    compute_area(&area1,x,y,x1,y1,x2,y2);
    compute_area(&area2,x,y,x2,y2,x3,y3);
    compute_area(&area3,x,y,x3,y3,x1,y1);
    compute_area(&area,x1,y1,x2,y2,x3,y3);
    if(area1+area2+area3==area)
        return 1;
    else
        return 0;
}
void compute_area(float *area,int x1,int y1,int x2,int y2,int x3,int y3)
{
    float dist;
    compute_distance(&dist,x1,y1,x2,y2);
    float a=dist;
    compute_distance(&dist,x2,y2,x3,y3);
    float b=dist;
    compute_distance(&dist,x3,y3,x1,y1);
    float c=dist;
    float S=(a+b+c)/2;
    *area=sqrt(S*(S-a)*(S-b)*(S-c));
}
void compute_distance(float *dist,int x1,int y1,int x2,int y2)
{
    *dist=sqrt(pow(y2-y1,2.0)+pow(x2-x1,2.0));
}