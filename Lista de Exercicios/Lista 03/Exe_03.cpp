// Solicitar o nome e idade de 3 pessoas (utilize a estrutura FOR)

#include <stdio.h>
#include <conio.c>
#include <locale.h>

void nome();

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  nome();

}

void nome() {
    char nome[3];
    for ( int x=0; x < 3; x++ ) {
      printf("Digite o nome da %d pessoa: ", x+1);
      scanf("%c", &nome[x]);
      fflush(stdin);
    }
}