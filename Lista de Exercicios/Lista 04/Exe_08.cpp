#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    printf("A palavra em minuscula e: %s\n", palavra);

    system("pause");
}
