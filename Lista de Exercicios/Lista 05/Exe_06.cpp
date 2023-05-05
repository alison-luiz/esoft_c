#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pessoa {
    char nome[50];
    int idade;
    char sexo;
};

int main() {
    struct Pessoa pessoas[5], temp;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome da %dª pessoa: ", i+1);
        scanf("%s", pessoas[i].nome);

        printf("Digite a idade da %dª pessoa: ", i+1);
        scanf("%d", &pessoas[i].idade);

        printf("Digite o sexo da %dª pessoa (M ou F): ", i+1);
        scanf(" %c", &pessoas[i].sexo);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 5; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }

    printf("Nome\tIdade\tSexo\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%c\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].sexo);
    }

    system("pause");
}
