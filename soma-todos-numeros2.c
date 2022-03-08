// somar todos os numeros de 1 a 100 - versão do instrutor

#include <stdio.h>

int main() {
  int soma = 0;
  for(int i = 1; i <= 100; i++) {
    soma = soma + i;
  }

  printf("A soma eh %d", soma);
}