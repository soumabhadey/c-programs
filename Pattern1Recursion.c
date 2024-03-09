/* 1
   12
   123
   1234
   12345 */
#include <stdio.h>
#include <conio.h>
void row(int,int);
void pattern(int);
int main()
{
  clrscr();
  pattern(1);
  getch();
  return 0;
}
void pattern(int i)
{
  if(i<=5)
  {
    row(1,i);
    printf("\n");
    pattern(i+1);
  }
  
}
void row(int j,int i)
{
  if(j<=i)
  {
    printf("%d",j);
    row(j+1,i);
  }
}