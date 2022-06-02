#include <stdio.h>

int main() 
{
    int n;
    unsigned k;
    scanf("%d", &n);
    scanf("%u", &k);
    int res = n | (1 << k);
    
    printf("r = %d", res);
}
