#include <stdio.h>

int main() {
    int valor, fatorial = 1;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &valor);

    if (valor < 0) {
        printf("O valor digitado nao eh valido.\n");
    } else {
        for (int i = 2; i <= valor; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d eh: %d\n", valor, fatorial);
    }

    return 0;
}
