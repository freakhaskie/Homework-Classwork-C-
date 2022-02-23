#include <iostream>
#include <string>
#include <math.h>

int calculateLength(int x1, int y1, int x2, int y2)
{
  int d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  return d ;
}
int calculatesquare(int a, int b, int c)
{
  int per = a + b + c;
  double p = per / 2;
  double s = sqrt(p * (p - a) * (p - b) * (p - c));
  return s;

}
int main()
{
  int ax = 0;
  int ay = 0;
  int bx = 0;
  int by = 0;
  int cx = 0;
  int cy = 0;

  std::cout << "Введите координаты A (x y)\n";
  scanf("%d %d", &ax, &ay);

  printf("A(%d %d)\n", ax, ay);
  std::cout << std::endl;

  std::cout << "Введите координаты B (x y)\n";
  scanf("%d %d", &bx, &by);

  printf("B(%d %d)\n", bx, by);
  std::cout << std::endl;

  std::cout << "Введите координаты C (x y)\n";
  scanf("%d %d", &cx, &cy);

  printf("C(%d %d)\n", cx, cy);

  int ab = calculateLength(ax, ay, bx, by);
  int bc = calculateLength(bx, by, cx, cy);
  int ca = calculateLength(cx, cy, ax, ay);

  printf("ab = %d,bc = %d,ca = %d", ab, bc, ca);
  double square = calculatesquare(ab, bc, ca);
  std::cout << "Площадь:" << square;


}