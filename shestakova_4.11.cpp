#include <stdio.h>
#include <float.h>
#include <math.h>

int main(int argc, char **argv)
{
    int i;
    double x, sum = 0., sum1 = 0.;
    i = 0;
    while(1)
    {
        printf("a[%d] = ", i);
        scanf("%lf", &x);
        
        if(fabs(x) <= 2 * DBL_EPSILON) break;
        
        sum += x;
        sum1 += 1/x;
        i++;
    }
    printf("average_a = %lf, average_g = %lf", sum/i, i/sum1);
}