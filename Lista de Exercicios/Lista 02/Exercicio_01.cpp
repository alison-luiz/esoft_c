// Solicite um valor inteiro e apresente a mensagem: NÚMERO PAR ou NÚMERO ÍMPAR

#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);

    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if ( numero % 2 == 0 ) {
        printf("%d e PAR\n\n\n", numero);
    } else {
        printf("%d e IMPAR\n\n\n", numero);
    }

    system("pause");

}