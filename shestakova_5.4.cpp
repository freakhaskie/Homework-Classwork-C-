#include <stdio.h>
#include <stdlib.h>

double P1(const unsigned n)
{
    double product = 1, t = 1;
    
    for(unsigned i=1;i<=n;i++)
    {
        t *= i;
        product *= (1 + 1.0 / t);
    }
    return product;
}


double P2(const unsigned n)
{
    double product = 1, t = 1;
    
    for(unsigned i=1;i<=n;i++)
    {
        product *= (1 + t / (i * i));
        t *= -1;
    }
    return product;
}


int main()
{
    unsigned n;
    printf("n = ");
    scanf("%u", &n);
    printf("P_%f = %g\n", P1(n));
    printf("P_%f = %g\n", P2(n));
}

















