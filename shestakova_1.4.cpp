#include <math.h>
#include <iostream>
int main()
{
    double m1, m2, r, Y = 6.673, F;
    scanf("%lf", &m1);
    scanf("%lf", &m2);
    scanf("%lf", &r);

    F = Y * m1 * m2 / (r * r);
    printf("F = %le", F);
    return 0;
}