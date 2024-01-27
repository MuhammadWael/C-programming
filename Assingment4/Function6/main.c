#include <stdio.h>
#include <stdlib.h>

int gcd(int n1, int n2);
int main()
{
    int n1, n2;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D is %d.", gcd(n1, n2));
    return 0;
}

int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
