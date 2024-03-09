//median
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
int main()
{
    int n,i,j;
    float arr[MAXSIZE],temp,median;
    n=0;
    puts("Enter elements\nEnter -1 to stop");
    for(i=0; i<MAXSIZE; i++)
    {
        scanf("%f",&arr[i]);
        if(arr[i]==-1)
            break;
        n++;
    }
    //sort in ascending order
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
    if(n%2==0)
        median=(arr[n/2]+arr[n/2-1])/2;
    else
        median=arr[n/2];
    printf("Median=%f\n",median);
    return 0;
}