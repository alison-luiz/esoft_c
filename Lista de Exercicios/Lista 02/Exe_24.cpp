// Construa um programa que solicite um valor inteiro e apresente ao usuário se o mesmo é ou não um
// número PRIMO

#include <stdio.h>
#include <stdbool.h>
#include <conio.c>
#include <locale.h>

bool numPrimo(int num);

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);
    
  int num;

  printf("Digite um valor inteiro: ");
  scanf("%d", &num);

  if (numPrimo(num)) {
    printf("%d é um número primo.\n", num);
  } else {
    printf("%d não é um número primo.\n", num);
  }

  return 0;
}

bool numPrimo(int num) {
  int i;

  if (num <= 1) {
    return false;
  }

  for (i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }

  system("pause");
}
