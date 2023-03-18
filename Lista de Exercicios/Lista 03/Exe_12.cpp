// Construa um algoritmo que solicite os dados dos alunos (nome, nota1 e nota2) em uma sala de aula contendo 32
// alunos. Posteriormente, apresente a média da turma e o percentual de aprovados e reprovados, considerando que a
// média mínima para aprovação é 6,0. Obs. As notas fornecidas deverão ser validadas entre 0 e 10

#include <stdio.h>
#include <conio.c>
#include <locale.h>

const int controle_numAluno = 2;

int i, qtdAprovados = 0, atdReprovados = 0;
float notas[controle_numAluno][2], media, percAprovados, percReprovados;

void perguntar();
void somaMedia();

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  perguntar();
  somaMedia();
   
  printf("Média da turma e: %.2f.\n", media);
  printf("O percentual de aprovados e: %.2f%%.\n", percAprovados);
  printf("O percentual de reprovados e: %.2f%%.\n", percReprovados);

}

void perguntar() {

  for (i = 0; i < controle_numAluno; i++) {
  char nome[50];
  float nota1, nota2;
    
  printf("Informe o nome do aluno %d: ", i+1);
  scanf("%s", nome);
  fflush(stdin);

  do {
    printf("Informe a nota 1 do aluno %d: ", i+1);
    scanf("%f", &nota1);
    } while (nota1 < 0 || nota1 > 10);
  
  do {
    printf("Informe a nota 2 do aluno %d: ", i+1);
    scanf("%f", &nota2);
    } while (nota2 < 0 || nota2 > 10);
  
  notas[i][0] = nota1;
  notas[i][1] = nota2;

  }
}

void somaMedia() {
  
  media = 0;

  for (i = 0; i < controle_numAluno; i++) {
    float nota1 = notas[i][0], nota2 = notas[i][1], mediaAluno;
     mediaAluno = (nota1 + nota2) / 2;
     media += mediaAluno;
     
     if (mediaAluno >= 6) {
         qtdAprovados++;
     } else {
         atdReprovados++;
     }
  }
  
  media /= controle_numAluno;

  percAprovados = qtdAprovados / controle_numAluno * 100;
  percReprovados = atdReprovados / controle_numAluno * 100;

}