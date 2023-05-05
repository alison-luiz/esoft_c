#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int palavras = 1;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ' && frase[i+1] != ' ' && frase[i+1] != '\n') {
            palavras++;
        }
    }

    printf("A frase digitada possui %d palavras.\n", palavras);

    return 0;
}
