#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra com pelo menos 5 caracteres: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    if (tamanho < 5) {
        printf("Palavra digitada nao tem pelo menos 5 caracteres.\n");
        return 1;
    }

    printf("Os 3 ultimos caracteres da palavra digitada sao: %.3s\n", palavra+tamanho-3);

    system("pause");
}
