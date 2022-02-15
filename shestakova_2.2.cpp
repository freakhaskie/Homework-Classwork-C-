#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("a,b:\n");
    scanf("%f %f",&a,&b);
    c = hypot(a,b);
    printf("c=%g",c);
    return 0;
}