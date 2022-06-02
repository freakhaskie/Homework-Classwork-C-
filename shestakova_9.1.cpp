#include <stdio.h>
#include <stdlib.h>

float sum_sqr(float* arr, int n)
{
    float s = 0.f;
    for (int i = 0; i < n; i++) 
    {
        s += arr[i] * arr[i];
    }
    return s;
}

int main() 
{
    int n;
    scanf("%d", &n);
    float* mas = (float*)malloc(n * sizeof(float)); 
    
    if (!mas) 
    {
        printf("error in alloc memory");
        return 0;
    }
    for (int i = 0; i < n; i++) 
    {
        printf("a [%d] = ", i);
        scanf("%f", &mas[i]);
    }

    printf("s = %f", sum_sqr(mas, n));
    free(mas);
}

int input(int* m)
{
    int i=0;
    do
    {
        printf("a[%d] = ",i);
        scanf("%d",&m[i]);
    } while(m[i++]!=0);

    return i-2;
}
