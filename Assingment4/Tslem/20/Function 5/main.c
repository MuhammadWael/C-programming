#include <stdio.h>
#include <stdlib.h>
int sum(int x);
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    printf("The sum of digits is : %d",sum(num));
    return 0;
}
int sum(int x){
    if(x==0)
        return 0;
    return(x%10 + sum(x/10));
}
