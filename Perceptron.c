#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define NUM_OF_INPUTS 3
#define NUM_OF_LOGIC_INPUTS 4
#define LONGEST_GATE 4
/*Expecting The logic gate by simple Machine Learning Code*/
typedef struct perceptron
{
    int x[NUM_OF_INPUTS];
    double w[NUM_OF_INPUTS];
    double y;
    int rounded;

}perceptron;

perceptron get_perceptron(void);
void show_perceptron(perceptron p);
void which_gate(perceptron *p);
void train_perceptron(perceptron p);
perceptron recalc(perceptron p);
int main()
{
    perceptron perceptrons[NUM_OF_LOGIC_INPUTS];
    for (int i = 0; i < NUM_OF_LOGIC_INPUTS;i++)
    {
        printf("Enter input for number %d \n",i+1);
        perceptrons[i] = get_perceptron();
    }
    double desired[NUM_OF_LOGIC_INPUTS],real[NUM_OF_LOGIC_INPUTS];
    for (int i = 0; i < NUM_OF_LOGIC_INPUTS;i++)
    {
         printf("Enter desired output number %d : ",i+1);
         scanf("%lf",&desired[i]);
    }
    int epoch;
    printf("Enter The number of Epoch : ");
    scanf("%d",&epoch);
    printf("Values before epochs\n");
    printf("_____________________________________\n");
    for (int i = 0; i < NUM_OF_LOGIC_INPUTS;i++)
    {
         show_perceptron(perceptrons[i]);
    }
    for ( int i = 0; i < epoch ;i++)
    {
        for ( int j = 0;j < NUM_OF_LOGIC_INPUTS ;j++)
        {
            real[j] = perceptrons[j].y;
        }
        for ( int j = 0;j < NUM_OF_LOGIC_INPUTS ;j++)
        {
            real[j] = perceptrons[j].y;
            for ( int k = 0;k < NUM_OF_INPUTS ;k++)
            {
                perceptrons[j].w[k] = perceptrons[j].w[k] + (desired[j] - real[j]) * (perceptrons[j].y*(1-perceptrons[j].y)) * ( (perceptrons[j].x[0]) + (perceptrons[j].x[1]) + (perceptrons[j].x[2]) );
                perceptrons[j] = recalc(perceptrons[j]);
            }

        }
    }
    printf("Values after epochs\n");
    printf("_____________________________________\n");
    for (int i = 0; i < NUM_OF_LOGIC_INPUTS;i++)
    {
         show_perceptron(perceptrons[i]);
    }
    double energy,e=0;
    for ( int j = 0;j < NUM_OF_LOGIC_INPUTS ;j++)
    {
            e += (desired[j] - perceptrons[j].y);
    }
    energy =0.5*e;
    printf("\nResult of Energy function is: %0.3lf%\n\n\n",energy);
    return 0;
}

perceptron get_perceptron(void)
{
    perceptron p;
    p.x[0] = 1;
    p.w[0] = 0.3;
    p.w[1] = 0.2;
    p.w[2] = 0.1;
    printf("Enter first input X1 : ");
    scanf("%d",&p.x[1]);
    printf("Enter Second input X2 : ");
    scanf("%d",&p.x[2]);
    double v=0;
    for (int i = 0; i < NUM_OF_INPUTS; i++)
    {
        v += p.x[i]*p.w[i];
    }
    p.y = 1/(1 + exp(-v));
    p.rounded = round(p.y);
    return p;
}
perceptron recalc(perceptron p)
{
    double v=0;
    for (int i = 0; i < NUM_OF_INPUTS; i++)
    {
        v += p.x[i]*p.w[i];
    }
    p.y = 1/(1 + exp(-v));
    p.rounded = round(p.y);
    return p;
}
void show_perceptron(perceptron p)
{
    printf("|  X1  |  X2  |    y    |  rounded  |\n");
    printf("|  %d   |  %d   |  %.3f  |     %d     |\n",p.x[1],p.x[2],p.y,p.rounded);
}

void which_gate(perceptron *p)
{


    int count=0;
    for (int i = 0; i < NUM_OF_LOGIC_INPUTS ;i++)
    {
        if (p[i].rounded == (p[i].x[1] && p[i].x[2]))
        {
            count++;
        }
    }
    if (count == NUM_OF_LOGIC_INPUTS )
    {
        printf("Logic gate is AND");
            return;
    }
    count=0;
    for (int i = 0; i < NUM_OF_LOGIC_INPUTS ;i++)
    {
        if (p[i].rounded == (p[i].x[1]||p[i].x[2]))
        {
            count++;
        }
    }
    if (count == NUM_OF_LOGIC_INPUTS )
    {
        printf("Logic gate is OR");
            return;
    }
    count=0;
    for (int i = 0; i < NUM_OF_LOGIC_INPUTS ;i++)
    {
        if (p[i].rounded == !(p[i].x[1]&&p[i].x[2]))
        {
            count++;
        }
    }
    if (count == NUM_OF_LOGIC_INPUTS )
    {
        printf("Logic gate is NAND");
            return;
    }
    count=0;
    for (int i = 0; i < NUM_OF_LOGIC_INPUTS ;i++)
    {
        if (p[i].rounded == !(p[i].x[1]||p[i].x[2]))
        {
            count++;
        }
    }
    if (count == NUM_OF_LOGIC_INPUTS )
    {
        printf("Logic gate is NAND");
            return;
    }
    printf("The gate is not linearly separable");
}
