#include <stdio.h>

int main() {
  int a, b;
  float c;
  printf("Entre com o valor de a: ");
  scanf("%i", &a);
  printf("Entre com o valor de b: ");
  scanf("%i", &b);

  c = (a * b) / 2.0;
  printf("A area do triangulo eh: %f\n", c);

  return 0;
}