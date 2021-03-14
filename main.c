#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Hello! I am calcu!\n");
  int a = 2, b = 2, c;
  c = a + b;
  a = a - b;
  printf("summ = %d \n", c);
  printf("diff = %d \n", a);
  system("pause");
  return 0;
}
