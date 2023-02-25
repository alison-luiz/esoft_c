#include <stdlib.h>
#include <stdio.h>

// ler idade entre 18 a 50 anos
int idade;

int main() {

    do {
    printf("Idade entre 18 e 50: ");
    scanf("%d", &idade);
    fflush(stdin);

    if (  idade > 18 || idade < 50 ) {
        printf("Idade invalida, tente outra \n");
    }

    } while ( idade < 18 || idade > 50 );

    system("pause");
    return 0;
}