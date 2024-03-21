#include <stdio.h>

int main() {
  printf("\x1b[31m------------------------------------------\n");
  printf("             N O T A  L E G A L           \n");
  printf("------------------------------------------\x1b[0m\n");
  printf("Item                    Qtd       Valor   \n");
  printf("%s\t\t    %i\t\t  %.2f\n", "Banana nanica", 1, 15.00);
  printf("%s\t\t\t    %i\t\t  %.2f\n", "Maca fuji", 10, 50.00);
  printf("%s\t\t\t    %i\t\t  %.2f\n", "Uva globo", 5, 26.00);

  printf("%-20s    %-8i  %.2f\n", "Banana nanica", 1, 15.00);
  printf("%-20s    %-8i  %.2f\n", "Maca fuji", 10, 50.00);
  printf("%-20s    %-8i  %.2f\n", "Uva globo", 5, 26.00);
  printf("Banana nanica           1         R$ 15,00\n");
  printf("Maca fuji               10        R$ 50,00\n");
  printf("Uva globo               5         R$ 26,00\n");
  printf("\x1b[32m------------------------------------------\n");
  printf("Total                   15        R$ 91,00\x1b[0m\n");

  return 0;
}