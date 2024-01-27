#include <stdio.h>
#include <stdlib.h>
int reverse(int num);
int main()
{
    int x;
    printf("Enter The number\n");
    scanf("%d",&x);
    reverse(x);
    return 0;
}
int reverse(int num)
{
    int reverse=0,reminder;
    while(num!=0)
    {
     reminder=num%10;
     reverse=reverse*10+reminder;
     num=num/10;
    }
    printf("The number reversed is : %d",reverse);
    return 0;


}
