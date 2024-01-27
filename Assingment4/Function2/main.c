#include<stdio.h>
int ther(int res);
float tempr;
int main()
{
    int num;
    printf("Enter Resistane(in ohm) \n");
    scanf("%d",&num);
    printf("Output %d\n",ther(num));
    printf("The Global varible of temprature is %0.2f",tempr);
    return 0;
}

int ther(int res)
{

    if(res<973 || res>10000) return 0;
    else tempr=(res-13009)/-120.36;
    return 1;
    //slope = -120.35 ,, constant =13009

}
