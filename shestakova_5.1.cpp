#include <stdio.h>

int h(double a)
{
    double k = 1.0, s = 1.0;
    
    while(s<a)
    {
        k++;
        s += 1/k;
    }
    printf("s = %lf\n", s);
    return(int) k;
}

int main()
{
    double a;
    scanf("%lf", &a);
    printf("n = %d\n", h(a));
}