// Solicite os dados de 12 pessoas (nome, idade, sexo, quantidade de filhos) e posteriormente apresente:
// a) O percentual de homens
// b) A média de idade das mulheres (sem filhos)
// c) O nome e idade da pessoa mais jovem
// d) A quantidade de mulheres entrevistadas
// Obs. Todos os dados deverão ser validados na entrada

#include <stdio.h>
#include <conio.c>
#include <locale.h>

const int numPessoas = 1;

char nome[numPessoas];
int idade[numPessoas];
char sexo[numPessoas];
int filhos[numPessoas];
int qtdHomem = 0;
int qtdMulherSemFilhos = 0;
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
    scanf(" %s", &nome[x]);

    printf("Digite a idade: ");
    scanf("%i", &idade[x]);

    if (idade[x] < idadeMaisJovem) {
      idadeMaisJovem = idade[x];
      nomeMaisJovem[0] = nome[x];
    }

    printf("Digite o sexo (F/M): ");
    scanf(" %c", &sexo[x]);

    if (sexo[x] == 'M') {
      qtdHomem++;
    } else {
      qtdMulherEntrevista++;
    }

    printf("Digite a quantidades de filhos: ");
    scanf("%i", &filhos[x]);

    if (filhos[x] == 0 && sexo[x] == 'F') {
      qtdMulherSemFilhos++;
      qtdMulherSemFilhosIdade = qtdMulherSemFilhosIdade + idade[x];
    }
  }
}

void exibirDados() {
  printf("\nO percentual de homens da entrevista e: %.2f%%\n", (qtdHomem / numPessoas) * 100);
  printf("A media de idade das mulheres (sem filhos): %.0f\n", qtdMulherSemFilhosIdade / qtdMulherSemFilhos);
  printf("O nome e idade da pessoa mais jovem e: %c %d\n", nomeMaisJovem[0], idadeMaisJovem);
  printf("A quantidade de mulheres entrevistadas e: %d\n", qtdMulherEntrevista);
}