#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.c>

#define max 1000000

//--------------------------------------------------------------------------------------------------------------

int cpfInt[11];
char vetCPF[max][16];
int i = 0;

//--------------------------------------------------------------------------------------------------------------

void gerarCPF();
void gerarCPFstr();

//--------------------------------------------------------------------------------------------------------------

int main() {

    system("cls");

    FILE *cpf;
    cpf = fopen("cpfs.txt", "w");
    
    if (cpf == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }

    int qtd;
    printf("Digite quantos CPF quer gerar: ");
    scanf("%d", &qtd);

    for ( int x = 0; x < qtd; x++) {
        
        gerarCPF();
        textcolor(cpfInt[0]);
        fprintf(cpf, "%s\n", vetCPF[x]);

    }

    fclose(cpf);

}

//--------------------------------------------------------------------------------------------------------------


void gerarCPF() {

    int total;

    for (int x = 0; x < 9; x++) {
        cpfInt[x] = rand() % 10;
    }   
    
    total = 0;
    for ( int x = 0; x < 9; x++ ) {
        total = total + cpfInt[x] * (10 - x);
    }

    cpfInt[9] = 11 - (total % 11);
    if ( cpfInt[9] > 9 ) {
        cpfInt[9] = 0;
    }

    total = 0;
    for ( int x = 0; x < 10; x++ ) {
        total = total + cpfInt[x] * (11 - x);
    }

    cpfInt[10] = 11 - (total % 11);
    if ( cpfInt[10] > 9 ) {
        cpfInt[10] = 0;
    }

    gerarCPFstr();

}

void gerarCPFstr() {

    sprintf(vetCPF[i], "%d%d%d.%d%d%d.%d%d%d-%d%d", cpfInt[0], cpfInt[1], cpfInt[2], cpfInt[3], cpfInt[4], cpfInt[5], cpfInt[6], cpfInt[7], cpfInt[8], cpfInt[9], cpfInt[10]);
    
    vetCPF[i][16] = '\0';
    
    i++;

}

