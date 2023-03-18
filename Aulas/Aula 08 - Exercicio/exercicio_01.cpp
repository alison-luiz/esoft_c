//Exercicio 1
// construa um programa em linguagem C, utilizando procedimentos e vetores, 
// que apresente o vetor (desordenado), posteriormente apresente o vetor
// classificado em ordem crescente e também decrescente

// procedimentos:
// mostra();
// classificaCres(int tipo); onde o tipo 1 é crescente e -1 decrescente
// troca(); com passagem de parâmetro por refêrencia os valores a serem trocados
// obs. Utilize o método de prototipação

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>

void mostra();
void troca(int *n1, int *n2);
void classifica(int tip);

int num[10]={8,2,5,9,11,32,7,12,19,23};

int main() {

    system("cls");
    textcolor(3);

    mostra();
    printf("\n");
    system("pause");

    classifica(1);
    printf("\n");

    mostra();
    printf("\n");
    system("pause");

    classifica(-1);
    printf("\n");

    mostra();
    printf("\n");
    system("pause");

}

void mostra() {
    int x;
    for (x = 0; x < 10; x++) {
        printf("%d ", num[x]);
    }
}

void classifica(int tip) {

    int x, y;
    
    for (x = 0; x < 9; x++) {
        for (y = x+1; y < 10; y++) {
            if (num[x] > num[y] && tip == 1) {
                troca(&num[x], &num[y]);
            }
            if (num[x] < num[y] && tip == -1) {
                troca(&num[y], &num[x]);
            }
        }
    }
}

void troca(int *n1, int *n2) {
    int x = *n1;
    *n1 = *n2;
    *n2 = x;
}
