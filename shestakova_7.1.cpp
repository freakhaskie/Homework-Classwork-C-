
#include <stdio.h>

#define N 5

int main()
{
  int array[] = {2,15,9,23,5};

  double n;
  printf("n = ");
  scanf("%lf", &n);
  int k = 0;
  
  for(int i=0;i<N;i++)
  {
     if (array[i] < n) k++;
  }
 printf("Кількість чисел менших за n = %d", k);
}

