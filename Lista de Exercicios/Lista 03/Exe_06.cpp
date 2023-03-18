// Solicite o nome, idade e sexo de uma pessoa. Valide o sexo entre (“F” / “M”) idade entre 10 e 100 anos

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  char nome[50];
  char sexo;
  int idade;

  printf("Informe seu nome: ");
  scanf("%s", nome);
  fflush(stdin);

  printf("Informe seu sexo (F/M): ");
  scanf(" %c", &sexo);
  fflush(stdin);

  while (sexo != 'F' && sexo != 'M') {
    printf("Sexo invalido, informe seu sexo novamente (F/M): ");
    scanf(" %c", &sexo);
  }

  printf("Informe sua idade: ");
  scanf("%d", &idade);

  while (idade < 10 || idade > 100) {
    printf("Idade invalida. Informe sua idade novamente (entre 10 e 100 anos): ");
    scanf("%d", &idade);
  }
}