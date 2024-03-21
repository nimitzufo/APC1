#include <stdio.h>

int main(void) {
  char nome[31];
  int quantidade;
  float valor;

  printf("Entre com o nome do produto: ");
  scanf("%[^\n]s", nome);

  printf("Entre com a qtde do produto: ");
  scanf("%i", &quantidade);

  printf("Entre com o valor do produto: ");
  scanf("%f", &valor);

  printf("\x1b[31m------------------------------------------\n");
  printf("             N O T A  L E G A L           \n");
  printf("------------------------------------------\x1b[0m\n");

  printf("Item                    Qtd       Valor   \n");
  printf("%-20s    %-8i  %.2f\n", nome, quantidade, valor);

  return 0;
}