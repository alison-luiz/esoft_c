// Solicite o nome completo e a idade de 5 pessoas. No final, apresente o nome da pessoa mais velha e também o
// nome da pessoa mais jovem.

#include <stdio.h>
#include <string.h>
#include <conio.c>
#include <locale.h>

char nome[50], nomeMaisVelho[50], nomeMaisJovem[50];
int idade, idadeMaisVelho = 0, idadeMaisJovem = 100;

void perguntar();

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  perguntar();

  printf("A pessoa mais velha e %s, com %d anos.\n", nomeMaisVelho, idadeMaisVelho);
  printf("A pessoa mais jovem e %s, com %d anos.\n", nomeMaisJovem, idadeMaisJovem);

}

void perguntar() {
  for ( int i=0; i < 5; i++) {
    printf("Digite o nome da %do pessoa: ", i+1);
    scanf("%s", nome);

    do {
      printf("Digite a idade da %do pessoa: ", i+1);
      scanf("%d", &idade);
    } while ((idade < 0) || (idade > 120));

    if (idade > idadeMaisVelho) {
      idadeMaisVelho = idade;
      strcpy(nomeMaisVelho, nome);
    }

    if (idade < idadeMaisJovem) {
      idadeMaisJovem = idade;
      strcpy(nomeMaisJovem, nome);
    }

  }
}


