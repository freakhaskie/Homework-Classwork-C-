#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x;
    printf("x=");
    scanf("%lf", &x);
    printf("y=ch(%lf)=%lf", x, cosh(x));
}