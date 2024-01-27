#include <stdio.h>
#include <stdlib.h>
float big(float x ,float y);
int main()
{
    float num1 ,num2;
    printf("Enter two number\n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    printf("The return Value %0.2f",big(num1,num2));
    return 0;
}
float big(float x,float y)
{
    float big;
    if(x<0||y<0)
        return 0;
    else if(x==y)
        return 0;
    else if(x>y) big=x;
    else big=y;
    return big;

}
