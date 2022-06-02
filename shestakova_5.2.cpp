#include <stdio.h>

int Fibonacci(int n)
{
    int F0, F1, F;
    F0 = F1 = 1;
    
    for(int i=2; i<=n; i++)
    {
        F = F0 + F1;
        F0 = F1;
        F1 = F;
    }
    return F;
}

int Sum(int k)
{
    int F0, F1, F, s = 2;
    F0 = F1 = 1;
    
    while(F1<k)
    {
       F = F0 + F1;
       F0 = F1;
       F1 = F;
       s += F;
    }
    return s - F;
}

int main()
{
    int n;
    printf("S = %d\n", Sum(1000));
}














