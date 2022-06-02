#include <stdio.h>
#include <stdlib.h>


double** input_m(int n) 
{
    double** a = (double**)calloc(n, sizeof(*a)); 
    
    for (int i = 0; i < n; i++) 
    {
        a[i] = (double*)calloc(n, sizeof(*a[i]));
        for (int j = 0; j < n; j++) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
    return a;
}


void free_m(double** v1, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        free(v1[i]);
    }
    free(v1);
}


double** mult_m( double** v1,  double** v2, unsigned dim) 
{
    double** res = (double**)calloc(dim, sizeof(double*));
    for (unsigned i = 0; i < dim; i++) 
    {
        res[i] = (double*)calloc(dim, sizeof(res[i]));
        for (unsigned j = 0; j < dim; j++) 
        {
            for (unsigned k = 0; k < dim; k++) 
            {
                res[i][j] += v1[i][k] * v2[i][k];
            }
        }
    }
    return res;
}


void m_out(double** v, unsigned n) 
{
    unsigned i, j;
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%g  ", v[i][j]);
        }
        printf("\n");
    }
}


int main() 
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    double** v1 = input_m(n);
    double** v2 = input_m(n);
    double** v3 = mult_m(v1, v2, n);
    m_out(v3, n);
    free_m(v1, n);
    free_m(v2, n);
    free_m(v3, n);
}
