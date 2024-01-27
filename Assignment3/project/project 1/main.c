#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n ,c,i,space;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    space = n-1;
    for(i=1;i<=n;i++)
    {
        for(c=0;c<=space;c++)
        printf(".");

        printf("//");
        space--;
        for(c=-n*2+1;c<2*(i-1);c++)
        printf("_");

        printf("\\\\");
        for(c=0;c<=space+1;c++)
        printf(".");
        printf("\n");
    }
        printf("//");
        for(c=0;c<2*n-3;c++)
            printf("_");

         printf("LOVE!");
        for(c=0;c<2*n-3;c++)
            printf("_");

            printf("\\\\");
            printf("\n");

    space = 0;
    for(i=0;i<n;i++)
    {
        for(c=1;c<=space;c++)
        printf(".");

        printf("\\\\");
        space++;

        for(c=-n*2+1;c<=2*(n-i)-1;c++)
        printf("_");

        printf("//");
        for(c=1;c<=space-1;c++)
        printf(".");

        printf("\n");
    }

    return 0;
}
