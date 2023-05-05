#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v1[20], v2[20], temp;

    srand(time(NULL));
    for (int i = 0; i < 20; i++) {
        v1[i] = rand() % 91 + 10; // valores entre 10 e 100
    }

    for (int i = 0; i < 20; i++) {
        v2[i] = v1[i];
    }

    for (int i = 0; i < 20; i++) {
        for (int j = i+1; j < 20; j++) {
            if (v2[i] > v2[j]) {
                temp = v2[i];
                v2[i] = v2[j];
                v2[j] = temp;
            }
        }
    }

    printf("Vetor 1\t\tVetor 2\n");
    for (int i = 0; i < 20; i++) {
        printf("%d\t\t%d\n", v1[i], v2[i]);
    }

    system("pause");
}
