#include <stdio.h>
#include <math.h>
double Rosenbrock2d(double x, double y){
    return 100*pow(x*x-y,2) + (pow(x-1,2));

}
int main(){
    printf("%lf, ", Rosenbrock2d(7,1)); 
    printf("%lf, ", Rosenbrock2d(9,0));
    printf("%lf\n ", Rosenbrock2d(3,2));
    return 0;
}