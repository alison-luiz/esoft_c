// 1) construir um programa que solicite um CPF e uma função retorne verdadeiro ou falso 
// referente a validação do CPF 

// 2) Construa um programa que sorteie 30 números entre 0 e 500 utilizando um procedimento SORTEADOS.
// Posteriormente, faça um procedimento que classifique-o em ordem crescente (qualquer técnica)
// denominado CLASSIFICADOS. Em seguida, solicite um dado numérico, e através de uma função denominada BUSCA,
// realize a  busca no vetor e retorne -1 (menos 1) caso o elemento não seja localizado ou o seu endereço
// no vetor caso seja encontrado.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>

char cpfStr[12];
int cpfInt[11];
int dv1, dv2;


void solicitarCpf();
void converterCpf();
void validarIgualdade();
void validarDv1();
void validarDv2();

int main() {

    system("cls");
    textcolor(3);

    solicitarCpf();

}

void solicitarCpf() {
    
    do {
    printf("Digite um CPF para validar (apenas numeros): ");
    gets(cpfStr);
    fflush(stdin);
    } while (strlen(cpfStr) != 11);

    converterCpf();
}

void converterCpf() {
    char tmp[2];
    for ( int x = 0; x < 11; x++ ) {
        tmp[0] = cpfStr[x];
        tmp[1] = '\0';
        cpfInt[x] = atoi(tmp);
    }

    validarIgualdade();
}

void validarIgualdade() {
    bool igual = true;
    for ( int x = 0; x < 11; x++) {
        for ( int y = 1; y <= 11; y++ ) {
            if ( cpfStr[x] == cpfStr[y] ) {
                igual = false;
            }
        }
    }

    if ( igual = true) {
        printf("CPF com numeros iguais!");
    } else {
        validarDv1();
    }
    
}

void validarDv1() {
    int dig, total = 0;
    for ( int x = 10; x > 1; x-- ) {
        total += cpfInt[dig] * x;
        dig++;
    }

    total = 11 - (total % 11);
    if ( total > 9 ) {
        total = 0;
    }

    dv1 = total;
    validarDv2();
}

void validarDv2() {
    int dig, total = 0;
    for ( int x = 11; x > 1; x-- ) {
        total += cpfInt[dig] * x;
        dig++;
    }

    total = 11 - (total % 11);
    if ( total > 9 ) {
        total = 0;
    }

    dv2 = total;
}
