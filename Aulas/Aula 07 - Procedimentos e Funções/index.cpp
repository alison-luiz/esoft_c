#include <stdio.h>
#include <stdlib.h>

// Função em C
float soma(float x, float y) {
    return x + y;
};

// Procedimento em C
void procedimentoSoma(float x, float y) {
    float fSoma = soma(x, y);
    printf("A soma dos numeros e: %.2f\n", fSoma);
}

int main() {

    system("cls");

    float num1, num2;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    fflush(stdin);

    printf("Digite outro numero: ");
    scanf("%f", &num2);
    fflush(stdin);

    // Chamando o procedimento
    procedimentoSoma(num1, num2);

    system("pause");
}