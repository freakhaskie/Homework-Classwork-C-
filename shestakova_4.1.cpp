#include <stdio.h>
#include <math.h>

int main() 
{
    double y, x;
    unsigned n;
    printf("n = ");
    scanf("%u", &n);
    printf("x = ");
    scanf("%lf", &x);
    
    y = x;
    for(unsigned i=0;i<n;i++)
    {
        y = sin(y);
    }
    printf("Y = %lf", y);
}