// Construa um programa que apresente todos os números PRIMOS entre 1 e 500

#include <stdio.h>
#include <stdbool.h>
#include <conio.c>
#include <locale.h>

bool numPrimo(int num);

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  int i;

  for (i = 1; i <= 500; i++) {
    if (numPrimo(i)) {
      printf("%d\n", i);
    }
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
