#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Hello! I am calcu!\n");
  int a = 3, b = 2, c, d;
  c = a + b;
  printf("summ = %d \n", c);
  c = 0;
  d = a - b;
  printf("diff = %d \n", d);
  c = a * b;
  printf("mult = %d \n", c);
  system("pause");
  return 0;
}
