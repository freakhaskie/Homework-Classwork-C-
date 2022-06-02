#include <stdio.h>

int main()
{
    unsigned n;
    scanf("%u", &n);
    unsigned long long k = 1UL;
    for(unsigned i=n;i>=2;i-=2)
    {
        k *= i;
    }
    printf("%u!! = %Lu \n", n, k);
}