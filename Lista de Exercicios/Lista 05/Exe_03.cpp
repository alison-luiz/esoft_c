#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int vetor[23], temp;

    srand(time(NULL));
    for (int i = 0; i < 23; i++) {
        vetor[i] = rand() % 100;
    }

    for (int i = 0; i < 23; i++) {
        for (int j = i+1; j < 23; j++) {
            if (vetor[i] < vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("Os valores em ordem decrescente sao:\n");
    for (int i = 0; i < 23; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    system("pause");
}
