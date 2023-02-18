#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

char nome[50]; // Sem determinar a quantiade de caracteres, ele vai armazenar apenas um.

int main() {

    setlocale(LC_ALL,"portuguese");

    printf("Qual seu nome? ");
    scanf("%s", &nome);
    fflush(stdin);

    printf("Seu nome é: %s \n\n", nome);

    printf("Qual seu nome? ");
    gets(nome);
    fflush(stdin);
    
    printf("Seu nome é: %s \n\n", nome);

    system("pause");
}