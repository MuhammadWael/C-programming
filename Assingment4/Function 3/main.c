
#include<stdio.h>
#include<math.h>
int armstrong(int num);
int main()
{
    int x;
    printf("Enter The number\n");
    scanf("%d",&x);
    printf("Return Value : %d",armstrong(x));
    return 0;
}
int armstrong(int num)
{
    int sum=0,temp,n=0,Onum;
    for(Onum=num;Onum!=0;n++) Onum/=10;

    Onum=num;

    while(num!=0)
    {
        temp=num%10;
        sum += pow(temp,n);
        num /= 10;
    }

    if(Onum == sum) return 1;
    else return 0;

}
