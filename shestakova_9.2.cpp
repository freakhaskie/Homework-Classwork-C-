#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int input(int* n) 
{
    int i = 0;
    do 
    {
        printf("a[%d] = ", i);
        scanf("%d", &n[i]);
    } while (n[i++] != 0);
    return i - 2;
}

int main() 
{
    int* memory = (int*)malloc(100 * sizeof(*memory));
    int n = input(memory);
    int cnt = 0, cnnt = 0;

    for (int i = 0; i < n; i++) 
    {
        double tmp = sqrt(memory[i]);
        if (tmp * tmp == memory[i]) cnt++;
    }

    for (int i = 0; i < n; i++) 
    {
        double tmp = cbrt(memory[i]);
        if (tmp * tmp * tmp == memory[i]) cnnt++;
    }

    printf("Number of sq = %d\n", cnt);
    printf("Number of c = %d", cnnt);
    free(memory);
}