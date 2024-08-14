/*
Construa um programa que calcule a soma de dois numeros inteiros
*/ b    
#include <stdio.h>

int main() {
  int a, b, soma;
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  soma = a + b;
  printf("A soma de %d e %d é %d\n", a, b, soma);
  return 0;  

}