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
#include <ctype.h>
#include <unistd.h>

FILE *ArqPalavra;
#define max 25
#define maxSort 100

//========================================================================
char matriz[max][max];
int matrizControle[max][max];
char palavras[maxSort][20];
char palavraSelecionada[20];
char palavra[20];

//========================================================================
bool openFile();
void lerPalavras();
void sortearMatriz();
void exibirMatrizCustom();
void inserirPalavra();
void perguntarPalavra();

//========================================================================

int main() {

    system("cls");
    srand(time(NULL));

    if ( openFile() == 0 ) {
        return 0;
    }

    lerPalavras();
    sortearMatriz();
    inserirPalavra();
    exibirMatrizCustom();

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
    //printf("Palavra selecionada: %s\n", palavraSelecionada);
}

void inserirPalavra() {

    int metodo = rand() % 4 + 1;

    int linha = (rand() % 25) + 1;
    int coluna = (rand() % 25) + 1;

    switch (metodo) {
    case 1:
        if ( coluna > strlen(palavraSelecionada) ) {
            coluna -= strlen(palavraSelecionada);
        }
        for ( int x = 0; x < strlen(palavraSelecionada); x++ ) {
            matriz[linha][coluna + x] = palavraSelecionada[x];
        }
        break;
    case 2:
        if ( coluna < strlen(palavraSelecionada) ) {
            coluna += (coluna - strlen(palavraSelecionada)) * -1;
        }
        for ( int x = 0; x < strlen(palavraSelecionada); x++ ) {
            matriz[linha][coluna - x] = palavraSelecionada[x];
        }
        break;
    case 3:
        if ( linha > strlen(palavraSelecionada) ) {
            linha -= strlen(palavraSelecionada);
        }
        for ( int x = 0; x < strlen(palavraSelecionada); x++ ) {
            matriz[linha + x][coluna] = palavraSelecionada[x];
        }
        break;
    case 4:
        if ( linha < strlen(palavraSelecionada) ) {
            linha += (coluna - strlen(palavraSelecionada)) * -1;
        }
        for ( int x = 0; x < strlen(palavraSelecionada); x++ ) {
            matriz[linha - x][coluna] = palavraSelecionada[x];
        }
        break;
    default:
        break;
    }
    //printf("Metodo: %d Linha: %d Coluna: %d\n\n\n", metodo, linha, coluna);
}

void sortearMatriz() {
  char vog[6]="AEIOU";
  char con[22]="BCDFGHJKLMNPQRSTVXWYZ";
  int control = 1;

    for ( int x = 0; x < max; x++ ) {
        for ( int y = 0; y < max; y++ ) {
            if ( control == 1 || control == 3 ) {
                matriz[x][y] = vog[rand()%5];
                matrizControle[x][y] = 0;
            } else {
                matriz[x][y] = con[rand()%21];
                matrizControle[x][y] = 0;
            }
            
            control++;
            if ( control > 3 ) {
                control = 1;
            }
        }
    }
}

void exibirMatrizCustom() {

    int count = 0;
    int x, y;

    do {
    x = rand() % max + 1;
    y = rand() % max + 1;

    if (matrizControle[x][y] == 0) {
        matrizControle[x][y] = 1;
        gotoxy(x, y);
        textcolor(rand()%5);
        usleep(1000);
        printf("%c", matriz[x][y]);
        count++;
    }

    } while ( count < max * max );

    perguntarPalavra();


}

void perguntarPalavra() {

    do {
        gotoxy(26, 26);
        printf("Digite a palavra (max 20 caracteres): ");
        gets(palavra);
    } while ( strlen(palavra) <= 0 || strlen(palavra) >= 20 );

    for ( int x = 0; x < strlen(palavra); x++ ) {
        palavra[x] = toupper(palavra[x]);
    }

    int count = 0;
    for ( int x = 0; x < strlen(palavra); x++ ) {
        if ( palavra[x] != palavraSelecionada[x] ) {
            count--;
        } else {
            count++;
        }
    }

    if ( count == strlen(palavra) ) {
        printf("Voce acertou!!");
    } else {
        printf("Voce errou!!");
    }

    //printf("contador: %d tam palavra: %d", count, strlen(palavra));
}
