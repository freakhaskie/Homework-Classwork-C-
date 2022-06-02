#include <stdio.h>
#include <math.h>

double exp1(double x, int n)
{
    double k = 1;
    double y = 1;
    int i = 1;
    while(i<=n)
    {
       k *= (x/i);
       y += k;
       i++;
    }
    return y;
}

int main()
{
    int n;
    double x, y;
    scanf("%d", &n);
    scanf("%lf", &x);
    y = exp1(x,n);
    printf("y = %lf, %lf", y, exp(x));
}