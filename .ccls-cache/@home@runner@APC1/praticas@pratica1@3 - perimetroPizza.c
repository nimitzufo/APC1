#include <stdio.h>
#define PI 3.1416

int main() {
  int r;
  float p;
  printf("Entre com o valor do raio: ");
  scanf("%i", &r);
  p = 2 * PI * r;
  printf("O perímetro da pizza é: %f\n", p);

  return 0;
}