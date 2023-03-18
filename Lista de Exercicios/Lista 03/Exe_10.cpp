// Solicite 10 números ao usuário. A cada número solicitado, apresente a mensagem PAR ou IMPAR e no fim,
// apresente a média dos números ímpares.

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int num, numImpar = 0, qtdImpar = 0;
void perguntar();
void impar();

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  perguntar();
  impar();

}

void perguntar() {
  for ( int i=1; i <= 10; i++ ) {
    printf("Informe o %do numero: ", i);
    scanf("%d", &num);
    fflush(stdin);

    if (num % 2 == 0) {
      printf("PAR\n");
    } else {
      printf("IMPAR\n");
      numImpar += num;
      qtdImpar++;
    }
  }
}

void impar() {
  if (qtdImpar == 0) {
    printf("Nenhum impar informado.\n");
  } else {
    int mediaImpar = numImpar / qtdImpar;
    printf("A media dos numeros impares informados e %d\n", mediaImpar);
  }
}