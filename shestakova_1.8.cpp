#include <stdio.h>
#include <math.h>
int main(){
    double a, b, l, n;
    printf("a=");
    scanf("%lf", &a);
    printf("b=");
    scanf("%lf", &b);
    l = a - b;
    n = a + b;
    printf("a-b=%g\n",l);
    printf("a+b=%g",n);
}