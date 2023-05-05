#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[100];
    int tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    printf("A palavra digitada tem %d caracteres.\n", tamanho);

    system("pause");
}