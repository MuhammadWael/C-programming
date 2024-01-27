#include <stdio.h>
#include <stdlib.h>

int main()
{
        int x,i,c,y,X;
    float suit,money,total;
    printf("Enter Bakar's age\n");
    scanf("%d",&x);
    printf("Enter the suit's price\n");
    scanf("%d",&y);
    printf("Enter the price of RASHIDA's house\n");
    scanf("%d",&X);
    for(i=1;i<=x;i+=2)
    {
        c+=1;
        money +=((money+50*c)*0.95);
    }
    suit=y*(x/2);
    total = suit + money ;
    printf("the total amount of saved money is %0.2f \n",total);
    if (total>X)
    {
        printf("it will be enough to buy the house\n");

    }
        else
        {
            printf("it's not enough to buy the house\n");
        }

    return 0;
}
