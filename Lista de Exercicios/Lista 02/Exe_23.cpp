// Construa um programa que apresente todos os números pares entre 11 e 30

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
  int i;

  for (i = 11; i <= 30; i++) {
    if (i % 2 == 0) {
      printf("%d\n", i);
    }
  }

  system("pause");
}
