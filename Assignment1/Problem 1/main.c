#include<stdio.h>

int main(void)
{
    float x1 , x2 , y1 , y2 ;
    printf("Enter the coordinates of first point\n");
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("Enter the coordinates of second point\n");
    scanf("%f",&x2);
    scanf("%f",&y2);
    float x3 = 2*x2-x1;
    float y3 = 2*y2-y1;
    printf("The point reflected is (%0.2f,%0.2f)",x3,y3);

    return 0;
}

