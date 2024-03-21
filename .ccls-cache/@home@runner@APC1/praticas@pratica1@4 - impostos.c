#include <stdio.h>

int main() {
  float precoInicial, imposto, precoFinal;
  printf("Entre com o preço inicial: ");
  scanf("%f", &precoInicial);
  imposto = precoInicial * (1 + 0.17 + 0.076 + 0.0165);
}