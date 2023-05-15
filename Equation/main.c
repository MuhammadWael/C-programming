#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int  i,size ;
    printf("Enter size of the number of elements (n) :  ");
    scanf("%d",&size);
    float *x =malloc(sizeof(int)*size);
    float *y =malloc(sizeof(int)*size);
    float sum_x=0 , sum_y=0,sum_yx=0,sum_x2=0;
    float av_x ,av_y,a,b;

    printf("Enter elements of x \n");
    for(i=0 ; i<size  ; i++)
    {
        printf("Enter the element : ");
        scanf("%f",(x+i));
    }

    printf("Enter the elements of y \n");
    for(i=0 ; i<size ; i++)
    {
        printf("Enter the element : ");
        scanf("%f",(y+i));
    }
    for(i=0 ; i<size ; i++)
    {
        sum_x += *(x+i);
        sum_yx += (*(y+i))*(*(x+i));
        sum_y += *(y+i);
        sum_x2 += *(x+i) * *(x+i) ;

    }
    av_x = sum_x / size ;
    av_y = sum_y / size ;
    b = (size*(sum_yx)-(sum_y*sum_x))/(size*sum_x2-sum_x*sum_x);
    a = av_y - (b*av_x);

    printf("Equation is : %0.2f= %0.2f + %0.2f * %0.2f ",av_y, a,b,av_x);



    return 0;

}


