// Solicitar o nome e idade de 3 pessoas (utilize a DO WHLE)

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
    int x = 0;
    char nome[3];
    do {
    printf("Digite o nome da %d pessoa: ", x+1);
    scanf("%c", &nome[x]);
    fflush(stdin);
    x++;
    } while (x < 3);
}