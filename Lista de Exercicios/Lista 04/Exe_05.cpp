#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++) {
        printf("%c\n", palavra[i]);
    }

    system("pause");
}
