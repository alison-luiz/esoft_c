// Apresente todos os números pares entre 5 e 50 (um na frente do outro) – Utilize o DO WHILE

#include <stdio.h>
#include <conio.c>
#include <locale.h>

void numPar();

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  numPar();

}

void numPar() {
  int num = 6;
  printf("Números pares entre 5 e 50: ");

  do {
    printf("%d ", num);
    num += 2;
  } while (num <= 50);
}