
#include <stdio.h>

int main() {
    int ano = 0;
    printf("Insira um ano: ");
    scanf("%i", &ano);
    int ano_bissexto = 0;
if (ano % 400 == 0) {
  printf("O ano %i eh bissexto!\n", ano);
}else if (ano % 100 == 0) {
  printf("O ano %i eh bissexto!\n", ano);
}else if (ano % 4 == 0) {
  printf("O ano %i eh bissexto!\n", ano);
}else {
  printf("O ano %i nao eh bissexto.\n", ano);
}

  return 0;
}

