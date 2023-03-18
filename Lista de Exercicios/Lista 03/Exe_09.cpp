// Apresente todos os números ímpares entre 5 e 50 (um na frente do outro) – Utilize o FOR

#include <stdio.h>
#include <conio.c>
#include <locale.h>

void numImpar();

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  numImpar();

}

void numImpar() {
  printf("Números ímpares entre 5 e 50:\n");

  for ( int x=5; x <= 50; x+=2 ) {
    printf("%d ", x);
  }
}