
#include<stdio.h>

int main()
{
    int n,arr[1000],i,sum;
    printf("Number of elements = ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n-1;++i)
    {
        scanf("%d",&arr[i]);
    }
    sum=n*(n+1)/2;
    for(i=0;i<n;i++)
    {
        sum -= arr[i];


    }
    printf("The missing number is : %d",sum);
    return 0;
}
