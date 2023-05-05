#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++) {
        palavra[i] = toupper(palavra[i]);
    }

    printf("A palavra em MAIUSCULA e: %s\n", palavra);

    system("pause");
}
