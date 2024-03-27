#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;

  printf("Digite o valor de a: ");
  scanf("%i", &a);
  printf("Digite o valor de b: ");
  scanf("%i", &b);
  printf("Digite o valor de c: ");
  scanf("%i", &c);
  int delta = (b * b) - 4 * a * c;
  printf("O valor de delta é: %i\n", delta);
  float x1 = (-b + sqrt(delta)) / (2 * a);
  float x2 = (-b - sqrt(delta)) / (2 * a);
  printf("O valor da primeira raiz é: %f\n", x1);
  printf("O valor da segunda raiz é: %f\n", x2);

  return 0;
}