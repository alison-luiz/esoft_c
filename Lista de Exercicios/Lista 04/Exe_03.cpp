#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char palavra[100], copia[4];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    strncpy(copia, palavra+1, 3);
    copia[3] = '\0';

    printf("A partir do segundo caractere, os 3 caracteres sao: %s\n", copia);

    system("pause");
}
