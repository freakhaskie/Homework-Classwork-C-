#include <stdio.h>
#include <math.h>

double my_exp(double x, double eps)
{
    double y = 1.0;
    double t = 1.0;
    int k = 0;
    
    while(fabs(t)>eps)
    {
        k++;
        t *= x / k;
        y += t;
    }
    return y;
}

void t8()
{
    double eps, x;
    printf("x = ");
    scanf("%lf", &x);
    
    do
    {
        printf("eps = ");
        scanf("%lf", &eps);
    }
    while(eps<=0);
    printf("my exp(%lf) = %lf, real exp(%lf) = %lf", x, my_exp(x, eps), x, exp(x));
}

int main()
{
    t8();
}