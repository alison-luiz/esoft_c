// Apresentar os números de 30 a 5 na tela (na mesma linha)

#include <stdio.h>
#include <conio.c>
#include <locale.h>

void exibirNumeros();

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  exibirNumeros();

}

void exibirNumeros() {
  for ( int x=30; x >= 5; x-- ) {
    printf("%d ", x);
  }
}