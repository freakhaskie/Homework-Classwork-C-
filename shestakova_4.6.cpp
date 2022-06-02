#include <stdio.h>
#include <math.h>

int main()
{
    unsigned n;
    printf("n = ");
    scanf("%u", &n);
    double total = sqrt(2);
    
    for(unsigned i=1;i<n;i++)
    {
        total = sqrt(2 + total);
    }
    printf("total = %g\n", total);

}
