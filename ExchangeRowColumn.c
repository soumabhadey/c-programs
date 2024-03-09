#include <stdio.h>
void displayMatrix(int a[][10],int,int);
void exchange(int a[][10],int,int);
int main()
{
    int a[10][10],m,n,i,j;
    puts("Enter number of rows and columns");
    scanf("%d %d",&m,&n);
    puts("Enter elements");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    puts("Entered matrix");
    displayMatrix(a,m,n);
    exchange(a,m,n);
    puts("Matrix after exchanging rows and columns");
    displayMatrix(a,m,n);
    return 0;
}
void displayMatrix(int a[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        puts("");
    }
}
void exchange(int a[][10],int m,int n)
{
    int i,j,temp;
    for(i=0;i<m;i++)
        for(j=i;j<n;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
}