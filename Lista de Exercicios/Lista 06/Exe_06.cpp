#include <stdio.h>
#include <string.h>

void contar_vogais(char nome[]) {
    int vogais = 0;

    for (int i = 0; i < strlen(nome); i++) {
        if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' ||
            nome[i] == 'o' || nome[i] == 'u' || nome[i] == 'A' ||
            nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' ||
            nome[i] == 'U') {
            vogais++;
        }
    }

    printf("O nome digitado possui %d vogais.\n", vogais);
}

int main() {
    char nome[50];

    printf("Digite um nome: ");
    scanf("%s", nome);

    contar_vogais(nome);

    return 0;
}
