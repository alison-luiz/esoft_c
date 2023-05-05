#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O valor digitado eh par.\n");
    } else {
        printf("O valor digitado eh impar.\n");
    }

    return 0;
}
