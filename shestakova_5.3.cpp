#include <stdio.h>
#include <stdbool.h>

int printALLKOLLATZ(unsigned n, bool toPrint)
{
    unsigned a = n;
    int i = 0;
    
    while(a!=1)
    {
        if(a%2==0)
        {
            a = a / 2;
        }
        else
        {
            a = 3 * a + 1;
        }
        i++;
        if(toPrint)
        printf("a%d = %u; ", i, a);
        
    }
    return i;
}

int main()
{
    unsigned koll, i, n;
    printf("n = ");
    scanf("%u", &n);
    
    int max = 0, m;
    unsigned k;
    
    for(unsigned i=1;i<=1000;++i)
    {
        m = printALLKOLLATZ(i,false);
        
        if(max<m)
        {
            max = m;
            k = i;
        }
    }
    printf("k = %u\n", k);
    printALLKOLLATZ(k,true);
}

























