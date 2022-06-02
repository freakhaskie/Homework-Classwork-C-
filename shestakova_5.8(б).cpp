#include <stdio.h>
#include <math.h>

double my_phi(double x, double eps)
{
    double t = - x * x * x / 3;
    double y = x + t;
    int k = 1;
    
    while(fabs(t)>eps)
    {
        k++;
        t *= - x * x / (2 * k + 1) / (2 * k - 2);
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
    printf("phi(%lf) = %lf", x, my_phi(x, eps));
}

int main()
{
    t8();
}