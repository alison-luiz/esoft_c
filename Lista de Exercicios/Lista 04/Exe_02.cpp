#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Os 4 primeiros caracteres da palavra digitada sao: %.4s\n", palavra);

    system("pause");
}
