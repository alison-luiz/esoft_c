#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char nomes[10][50], temp[50];

    printf("Digite 10 nomes:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%s", nomes[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }

    printf("Os nomes em ordem crescente sao:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", nomes[i]);
    }

    system("pause");
}
