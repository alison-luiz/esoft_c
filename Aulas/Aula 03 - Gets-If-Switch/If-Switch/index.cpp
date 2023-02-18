#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int mes;

int main() {

    setlocale(LC_ALL, "portuguese");

    printf("Digite um mês? ");
    scanf("%i", &mes);
    fflush(stdin);
    
    if (mes == 1) {
        printf("Janeiro \n");
    }

    if (mes == 2) {
        printf("Fevereiro \n");
    }

    switch (mes) {
    case 1:
        printf("Janeiro \n");
        break;
    
    default:
        printf("Nenhum mês encontrado \n");
        break;
    }

    system("pause");
}