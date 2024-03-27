#include <math.h>
#include <stdio.h>

int main() {
  int n1, n2;

  printf("Digite o primeiro número: ");
  int result = scanf("%i", &n1);

  printf("Digite o segundo número: ");
  result = scanf("%i", &n2);

  int sum = n1 + n2;
  printf("A soma é: %i\n", sum);

  int sub = n1 - n2;
  printf("A subtração é: %i\n", sub);

  int mult = n1 * n2;
  printf("A multiplicação é: %i\n", mult);

  float div = (float)n1 / n2;
  printf("A divisão é: %f\n", div);

  int resto = n1 % n2;
  printf("O resto da divisão é: %i\n", resto);

  printf("o incremento de n1 é: %i\n", n1++);
  printf("o incremento de n1 é: %i\n", ++n1);

  printf("o decremento de n1 é: %i\n", n1--);
  printf("o decremento de n1 é: %i\n", --n1);

  double sqrt_n1 = sqrt(n1);
  printf("A raiz quadrada de n1 é: %f\n", sqrt_n1);
  double pow_n1 = pow(n1, 3);
  printf("n1 elevado a 3 é: %f\n", pow_n1);
  double log_n1 = log2(n1);
  printf("O logaritmo de n1 na base 2 é: %f\n", log_n1);

  return 0;
}
