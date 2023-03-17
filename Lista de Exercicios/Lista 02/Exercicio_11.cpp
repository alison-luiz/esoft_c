// Calcule e apresente a média de 10 números fornecidos pelo usuário, utilizando o laço de repetição DO / WHILE

#include <stdio.h>

int main() {
    int i = 0, num, soma = 0;

    do {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);
        soma += num;
        i++;
    } while(i < 10);

    float media = (float) soma / 10;
    printf("A média dos números é %.2f\n", media);

    return 0;
}
