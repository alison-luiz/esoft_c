// AVALIAÇÃO PRÁTICA - Valor 3,0

// - sortear uma matriz 25 X 25 contendo letras do alfabeto
// - ler o arquivo de palavras e sortear uma palavra
// - inserir palavra aleatoriamente na tabela (a ordem também deve ser aleatoria)
// - apresentar a matriz
// - solicitar ao usuário uma palavra
// - informar ao usuário caso a palavra digitada esteja na matriz (independente de ter sido a sorteada e inserida na tabela ou não)

// obs. A proporção para sorteio dos caracteres na matriz deverá ser 2:3, ou seja, para cada 3 caracteres sorteados, 2 deles deverão ser vogais 1 consoante.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>
#include <time.h>

FILE *ArqPalavra;
#define max 25
#define maxSort 100

//========================================================================
char matriz[max][max];
char palavras[maxSort][20];
char palavraSelecionada[20];

//========================================================================
bool openFile();
void lerPalavras();
void sortearMatriz();
void exibirMatriz();

//========================================================================

int main() {

    system("cls");
    textcolor(3);
    srand(time(NULL));
    
    if ( openFile() == 0 ) {
        return 0;
    }

    lerPalavras();
    sortearMatriz();
    exibirMatriz();

    printf("Palavra selecionada: %s", palavraSelecionada);

}

//========================================================================
bool openFile(){
  ArqPalavra = fopen("palavras.txt", "r");
  if (ArqPalavra == NULL) {
    printf("Deu B.O no arquivo...\n");
    system("pause");
    return 0;
  } else {
    fclose(ArqPalavra);
    return 1;
  }   
}

void lerPalavras() {
    ArqPalavra = fopen("palavras.txt", "r");
    int qtdPalavras = 0;
    while (!feof(ArqPalavra)) {
        fgets(palavras[qtdPalavras], 20, ArqPalavra);
        palavras[qtdPalavras][strlen(palavras[qtdPalavras])-1] = '\0';
        qtdPalavras++;
    }
    fclose(ArqPalavra);
    strcpy(palavraSelecionada, palavras[rand()%maxSort]);
    //printf("Palavra selecionada: %s", palavraSelecionada);
}

void sortearMatriz() {
  char vog[6]="AEIOU";
  char con[22]="BCDFGHJKLMNPQRSTVXWYZ";
  int control = 1;

    for ( int x = 0; x < max; x++ ) {
        for ( int y = 0; y < max; y++ ) {
            if ( control == 1 || control == 3 ) {
                matriz[x][y] = vog[rand()%5];
            } else {
                matriz[x][y] = con[rand()%21];
            }
            
            control++;
            if ( control > 3 ) {
                control = 1;
            }
        }
    }
}

void exibirMatriz() {
    for ( int x = 0; x < max; x++ ) {
        for ( int y = 0; y < max; y++ ) {
            printf("%c ", matriz[x][y]);
        }
        printf("\n");
    }
}
