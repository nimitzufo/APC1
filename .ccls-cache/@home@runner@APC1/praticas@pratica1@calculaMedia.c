#include <stdio.h>

int main(void){
  float a1, a2, media;
  printf("Entre com a nota da A1: ");
  scanf("%f", &a1);
  printf("Entre com a nota da A2: ");
  scanf("%f", &a2);
  media = 0.4 * a1 + 0.6 * a2;
  printf("Media = %.1f\n", media);

  return 0;
}