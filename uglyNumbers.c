#include <stdio.h>
#include <stdlib.h>
int isUgly(int);
int isPrime(int);
int main()
{
    fflush(stdin);
    int n;
    printf("Enter upper limit\n");
    scanf("%d",&n);
    printf("Ugly numbers\n");
    int i;
    for(i=1; i<=n; i++)
        if(isUgly(i))
            printf("%d ",i);
    return 0;
}
int isUgly(int n)
{
    int flag=1,i;
    for(i=1; i<=n; i++)
        if(n%i==0&&isPrime(i)&&i!=2&&i!=3&&i!=5)
            flag=0;
    return flag;
}
int isPrime(int n)
{
    int c=0,i;
    for(i=1; i<=n; i++)
        if(n%i==0)
            c++;
    return c==2;
}