// Solicite ao usuário o nome, idade e sexo (F/M) de algumas pessoas. A cada entrevista, o sistema deverá perguntar
// se o usuário deseja continuar a informar dados, e caso não queira, apresente a média de idade das mulheres.

#include <stdio.h>
#include <conio.c>
#include <locale.h>

char nome[50], sexo, continua;
int idade, qtdDeMulher = 0, somaIdadeMulher = 0;
float mediaIdadeMulher = 0;
void perguntar();
void qtdMulher();

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  perguntar();
  qtdMulher();

}

void perguntar() {    
    do {
      printf("Informe o nome da pessoa: ");
      scanf("%s", nome);
      fflush(stdin);
        
      do {
        printf("Informe a idade da pessoa: ");
        scanf("%d", &idade);
        fflush(stdin);
        } while (idade <= 0 || idade >= 120);
        
      do {
        printf("Informe o sexo da pessoa (F/M): ");
        scanf("%c", &sexo);
        fflush(stdin);
        } while (sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm');
        
      if (sexo == 'F' || sexo == 'f') {
          somaIdadeMulher += idade;
          qtdDeMulher++;
      }
      
      do {
        printf("Deseja continuar informando dados? (S/N): ");
        scanf("%c", &continua);
        } while (continua != 'S' && continua != 's' && continua != 'N' && continua != 'n');
        
    } while (continua == 'S' || continua == 's');
}

void qtdMulher() {
  if (qtdDeMulher > 0) {
    mediaIdadeMulher = (float) somaIdadeMulher / qtdDeMulher;
    printf("A media de idade das mulheres e %f.\n", mediaIdadeMulher);
    } else {
        printf("Nenhuma mulher foi entrevistada.\n");
    }
}