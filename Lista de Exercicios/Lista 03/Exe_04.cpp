// Apresentar os números de 5 a 20 na tela (linha a linha) 

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
  for ( int x=5; x <= 25; x++ ) {
    printf("%d\n", x);
  }
}