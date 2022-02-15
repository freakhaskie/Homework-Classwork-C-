#include <iostream>
#include <string>
int main()
{
  std::cout << "Введите два значения (пример: 3 4)\n";
  int v1 = 0; 
  int v2 = 0;
  
  scanf("%d %d", &v1, &v2);

  printf("Значения: %d %d\n", v1, v2);
  double average = (v1 + v2) / 2;
  printf("Среднее арифметическое:\t %f\n", average);
  double d = 1;
  double ch1 = d / v1;
  double ch2 = d / v2;
  double znam = ch1 + ch2;
  double gram = 2 / znam;
  printf("Среднее гармоническое:\t %f\n", gram);

}