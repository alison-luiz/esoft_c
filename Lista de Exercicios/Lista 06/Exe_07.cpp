#include <stdio.h>
#include <string.h>

void referencia_bibliografica(char nome[]) {
    char sobrenome[50], iniciais[50] = "";

    int posicao_espaco = 0;
    for (int i = strlen(nome)-1; i >= 0; i--) {
        if (nome[i] == ' ') {
            posicao_espaco = i;
            break;
        }
    }
    strncpy(sobrenome, nome+posicao_espaco+1, strlen(nome)-posicao_espaco);
    sobrenome[strlen(nome)-posicao_espaco] = '\0';

    for (int i = 0; i < strlen(nome)-strlen(sobrenome)-1; i++) {
        if (nome[i] != ' ' && nome[i-1] == ' ') {
            iniciais[strlen(iniciais)] = nome[i];
        }
    }
    iniciais[strlen(iniciais)] = '\0';

    printf("%s, %s", sobrenome, iniciais);
    for (int i = posicao_espaco-1; i >= 0; i--) {
        if (nome[i] == ' ' && nome[i-1] != ' ') {
            printf(" %c.", nome[i-1]);
        }
    }
    printf("\n");
}

int main() {
    char nome[50];

    printf("Digite um nome completo: ");
    fgets(nome, 50, stdin);

    referencia_bibliografica(nome);

    return 0;
}
