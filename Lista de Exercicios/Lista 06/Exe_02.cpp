#include <stdio.h>

int main() {
    int valor1, valor2, resultado = 0;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    for (int i = 0; i < valor2; i++) {
        resultado += valor1;
    }

    printf("O resultado da multiplicacao eh: %d\n", resultado);

    return 0;
}
