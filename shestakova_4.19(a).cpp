#include <stdio.h>
#include <math.h>
int main(){
    int n = 5;
    float x = 2, s= 0;
    for (int i = 1; i<=n; i++){
        s = s + pow(x - 1, i);
    }
    s= s+1;
    printf("Значення = %.2f\n", s);
}
