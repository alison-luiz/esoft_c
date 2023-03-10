/*
Solicitar uma frase contendo 25 caracteres e porteriormente
alimentar uma matriz 5x5 (denominada M1) contendo 25 primeiros caracteres da frase

Poreriormente, monte uma segunda matriz M2 contendo valores ascii de cada
um dos elementos da primeira matriz M1

Em seguida, gere um vetor V1 com 25 elementos contendo os valores da segunda matriz M2 em ordem crescente

Finalmente, aprensente ao usuario as duas matrizes (lado a lado) e abaixo o vetor na horizontal.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    char frase[26];
    char m1[5][5];
    int m2[5][5];
    int v1[25];

    int x,y,z,tmp;

int main() {

    system("cls");

    do {
        printf("Digite uma frase com no mínimo 25 caracteres:\n");
        gets(frase);
    } while ( strlen(frase) < 25 );

    z=0;
    for ( x = 0; x < 5; x++ ) {
        for ( y = 0; y < 5; y++) {
            m1[x][y] = frase[z];
            z++;
        }
    }

    for ( x = 0; x < 5; x++ ) {
        for ( y = 0; y < 5; y++) {
            m2[x][y] = m1[x][y];
        }
    }

    z=0;
    for ( x = 0; x < 5; x++ ) {
        for ( y = 0; y < 5; y++ )
        v1[z] = m2[x][y];
        z++;
    }

    for ( x = 0; x < 24; x++ ) {
      for ( y = x+1; y < 25; y++ ){
        if ( v1[y] < v1[x] ){
          tmp = v1[x];
          v1[x] = v1[y];
          v1[y] = tmp;
        }
      }
    }

    for ( x = 0; x < 5; x++ ) {
        printf("\n");
        for ( y = 0; y < 5; y++) {
            printf("%c ", m2[x][y]);
        }
    }
    printf("\n");

    system("pause");
}