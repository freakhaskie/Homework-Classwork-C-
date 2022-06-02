#include <stdio.h>
#include <float.h>

int main()
{
    int m;
    scanf("%d", &m);
    if(m<1)
    {
        printf("incorrect");
        return 0;
    }
    int k = 1, r = 0;
    while(k<m)
    {
        k *= 4;
        r++;
    }
    printf("4^%d < %d", r-1,m);
}