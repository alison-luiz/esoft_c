#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[100], valor, encontrado = 0;

    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        vetor[i] = rand() % 300 + 1; // valores entre 1 e 300
    }

    for (int i = 0; i < 100; i++) {
        for (int j = i+1; j < 100; j++) {
            if (vetor[i] > vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("Digite um valor entre 1 e 300: ");
    scanf("%d", &valor);

    int i = 0;
    while (i < 100 && vetor[i] < valor) {
        i++;
    }
    if (i < 100 && vetor[i] == valor) {
        printf("O valor foi encontrado na posicao %d do vetor.\n", i);
    } else {
        printf("Valor nao encontrado no vetor.\n");
    }

    system("pause");
}
