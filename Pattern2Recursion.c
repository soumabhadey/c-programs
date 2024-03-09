/*1
  2 3
  4 5 6
  7 8 9 10
  11 12 13 14 15*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int i=1,k=1;
    pattern(i,&k);
}
void pattern(int i,int *k)
{
    int j=1;
    if(i<=5)
    {
        row(i,j,k);
        printf("\n");
        pattern(i+1,k);
    }
}
void row(int i,int j,int *k)
{
     if(j<=i)
     {
         printf("%d ",*k);
         *k=*k+1;
         row(i,j+1,k);
     }
}