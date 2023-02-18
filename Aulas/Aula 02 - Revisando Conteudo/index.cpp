#include <stdio.h> // Responsável por entrada e saida - padrão para todos os arquivos
#include <stdlib.h> // Bibliotéca complementar - padrão para todos os arquivos

int idade;
char sexo;

int main() { // int main() é meu bloco principal
    
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    fflush(stdin);
    if (idade >= 18) {
        printf("Ja pode tirar CNH \n");
    };


    printf("Digite seu sexo: ");
    scanf("%c", &sexo);
    fflush(stdin);

    printf("idade: %i sexo: %c \n", idade, sexo);

    system("pause"); // Posso usar todos os comandos do windows aqui no system
}

