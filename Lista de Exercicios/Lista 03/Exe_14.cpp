// Solicite os dados de 12 pessoas (nome, idade, sexo, quantidade de filhos) e posteriormente apresente:
// a) O percentual de homens
// b) A média de idade das mulheres (sem filhos)
// c) O nome e idade da pessoa mais jovem
// d) A quantidade de mulheres entrevistadas
// Obs. Todos os dados deverão ser validados na entrada

#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <locale.h>
#include <ctype.h>

const int numPessoas = 12;

char nome[numPessoas];
int idade[numPessoas];
char sexo[numPessoas];
int filhos[numPessoas];
float qtdHomem = 0;
float qtdMulherSemFilhos = 0;
float qtdMulherSemFilhosIdade = 0;
int idadeMaisJovem = 999;
char nomeMaisJovem[numPessoas];
int qtdMulherEntrevista = 0;

void solicitarDados();
void exibirDados();

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  solicitarDados();
  exibirDados();

}

void solicitarDados() {

  for (int x = 0; x < numPessoas; x++) {

    printf("\nDigite o nome: ");
    scanf("%s", &nome[x]);
    fflush(stdin);

    do {
      printf("Digite a idade: ");
      scanf("%d", &idade[x]);
      fflush(stdin);
    } while (idade[x] < 0 || idade[x] > 150);

    if (idade[x] < idadeMaisJovem) {
      idadeMaisJovem = idade[x];
      nomeMaisJovem[0] = nome[x];
    }

    do {
      printf("Digite o sexo (F/M): ");
      scanf("%c", &sexo[x]);
      sexo[x] = toupper(sexo[x]);
      fflush(stdin);
    } while (sexo[x] != 'F' && sexo[x] != 'M');

    if (sexo[x] == 'M') {
      qtdHomem = qtdHomem + 1;
    } else {
      qtdMulherEntrevista++;
    }

    do {
      printf("Digite a quantidade de filhos: ");
      scanf("%d", &filhos[x]);
      fflush(stdin);
    } while (filhos[x] < 0 || filhos[x] > 20);

    if (filhos[x] == 0 && sexo[x] == 'F') {
      qtdMulherSemFilhos = qtdMulherSemFilhos + 1;
      qtdMulherSemFilhosIdade = qtdMulherSemFilhosIdade + idade[x];
    }
  }
}

void exibirDados() {

  printf("\nO percentual de homens da entrevista e: %.0f%%\n", (qtdHomem / numPessoas) * 100);
  printf("A media de idade das mulheres (sem filhos): %.0f\n", (qtdMulherSemFilhosIdade / qtdMulherSemFilhos));
  printf("O nome e idade da pessoa mais jovem e: %c %d\n", nomeMaisJovem[0], idadeMaisJovem);
  printf("A quantidade de mulheres entrevistadas e: %d\n", qtdMulherEntrevista);

}