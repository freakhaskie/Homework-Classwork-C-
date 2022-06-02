#include <stdio.h>
#include <float.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int p=1, r=0;
    do
    {
       p *= 2;
       r++;
    }while(p<n);
    
    printf("2^%d > %d", r, n);

}
