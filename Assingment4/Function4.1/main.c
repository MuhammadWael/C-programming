
#include<stdio.h>
int comp(int x ,int y);
int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d" "%d",&num1,&num2);
    printf("Output %d",comp(num1,num2));
    return 0;
}
int comp(int x ,int y)
{
    if(x<0 || y<0) return 0;
    else if (x>y) return x;
    else if (x<y) return y;
    else printf("They are Equal");
}
