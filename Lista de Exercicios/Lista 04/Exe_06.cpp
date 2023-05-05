#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char palavra1[100], palavra2[100], concatenada[200];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    strcat(concatenada, palavra1);
    strcat(concatenada, palavra2);

    printf("A concatenacao das duas palavras e: %s\n", concatenada);

    system("pause");
}
