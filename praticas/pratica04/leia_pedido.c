
#include <stdio.h>

int main() {
  char produto[21];
  int quantidade = 0;
  float valor = 0.0f;
  scanf( "%s", produto);
  scanf( "%i", &quantidade);
  scanf( "%f", &valor);
  printf("==============================\n");
  printf("\tN O T A    L E G A L \n");  
  printf("==============================\n");
  printf("Produto         Qtd Valor Unit\n");
  printf("Camiseta        002      39.99\n");
  printf("Calca           001      89.90\n");
  printf("Meia Social     003      19.99\n");
  printf("==============================\n");
  printf("Total:                  229.85\n");
  
  return 0;
}

