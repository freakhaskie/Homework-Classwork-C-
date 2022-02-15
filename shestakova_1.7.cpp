#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf("x = ");
    scanf("%lf", &x);
    printf("Целая часть из %g - %d\n", x, (int)x);
    printf("Дробная часть из %g - %g\n", x, x - (int)x);
    printf("Наибольшее целое число меньше чем %g - %d\n", x, (int)(ceil(x) - 1));
    printf("Наименьшее целое число больше чем %g - %d\n", x, (int)(floor(x) - 1));
    printf("x = %.3f\n", x);
    return 0;
}