#include <stdio.h>
long binary(int n)
{
    if(n==0)
        return 0;
    else
        return (binary(n/2)*10)+(n%2);
}
int main()
{
    int n;
    puts("Enter a number");
    scanf("%d",&n);
    printf("Binary form\n%ld\n",binary(n));
    return 0;
}