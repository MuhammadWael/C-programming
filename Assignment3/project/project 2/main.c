#include <stdio.h>
#include <stdlib.h>

int main()
{
       float x,d,spent,even,odd ;
    int y ,t,age,i;
    //x is the amount in EGP & d in $
    printf("Please enter the amount of money (X)?");
    scanf("%f",&x);
    printf("Please enter the year, which he planned to live for? ( remember he will reach there at 1700 )");
    scanf("%d",&y);
    d = x/2 ;
    t = y-1700;
    age = 21;
    for(i=1;i<=t;i+=2)
    {
        odd += (50*age+1000);
        age+=i;
    }
    even += (t/2)*1000;
    spent = even+odd;
    if(spent<d)  printf("Yes it will be enough and will have %0.2f$  remain \n",(d-spent));
    else printf("it would not be enough");

    return 0;
}
