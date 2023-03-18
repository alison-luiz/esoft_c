// Solicite 15 número (entre 10 e 50) e apresente posteriormente a média

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int controle=15;
void calcMedia();

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  calcMedia();

}

void calcMedia() {
  float media, soma;
  for ( int x=1; x <= controle; x++ ) {

    printf("Digite um numero (entre 10 e 50): ");
    scanf("%f", &media);
    fflush(stdin);

    while (media < 10 || media > 50) {
    printf("Valor invalido. Digite um numero (entre 10 e 50): ");
    scanf("%f", &media);
    
  }

    soma = soma + media;

  }

  printf("A media dos valores e: %.f", soma / controle);

}