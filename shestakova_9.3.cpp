#include <stdio.h>
#include <stdlib.h>


double* input_v(int n) 
{
    double* a = (double*)calloc(n, sizeof(*a));
    for (int i = 0; i < n; i++) 
    {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
    return a;
}


double* sub_v(const double* v1, const double* v2, const unsigned n) 
{
    double* res = (double*)calloc(n, sizeof(double));
    for (int i = 0; i < n; i++) 
    {
        res[i] = v1[i] - v2[i];
    }
    return res;
}


int sub_v2(const double* v1, const double* v2, double* v4, int n)
{
    for (int i = 0; i < n; i++) 
    {
        v4[i] = v1[i] - v2[i];
    }
    return 0;
}


void free_v(double* v1) 
{
    free(v1);
}


void v_out(double* v, int n) 
{
    printf("(%g", v[0]);
    for (int i = 0; i < n; i++) 
    {
        printf(", %g", v[i]);
    }
    printf(")\n");
}


int main() 
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    double* v1 = input_v(n);
    double* v2 = input_v(n);
    double* v3 = sub_v(v1, v2, n);
    v_out(v3, n);

    double v4[5];
    sub_v2(v1, v2, v4, n);
    v_out(v4, n);

    free_v(v1);
    free_v(v2);
}