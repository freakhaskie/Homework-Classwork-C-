#include <math.h>
#include <iostream>
int main()
{
    double x, x2, x4, x6, x9, x15, x28, x64;  
    printf("x = ");
    scanf("%lf", &x);
    x2= x * x;
    x4= x2 * x2;
    x6= x4 * x2;
    x9= x6 * x2 * x;
    x15= x9 * x6;
    x28= x15 * x9 * x4;
    x64= x15 * x15 * x15 * x15 * x4;

    printf("x^4= %lf\n", x4);
    printf("x^6= %lf\n", x6);
    printf("x^9= %lf\n", x9);
    printf("x^15= %lf\n", x15);
    printf("x^28= %lf\n", x28);
    printf("x^64 = %lf", x64);
    return 0;
}