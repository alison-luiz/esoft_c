#include <stdio.h>

int main() {
    int valor, primo = 1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor <= 1) {
        primo = 0;
    } else {
        for (int i = 2; i <= valor/2; i++) {
            if (valor % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo == 1) {
        printf("O valor digitado eh primo.\n");
    } else {
        printf("O valor digitado nao eh primo.\n");
    }

    return 0;
}
