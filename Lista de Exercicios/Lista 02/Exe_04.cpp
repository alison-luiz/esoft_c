// Solicite duas variáveis inteiras (valor1 e valor2) e apresente a mensagem: VALOR1 é maior, VALOR2 é
// maior ou VALORES IGUAIS.

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
    int valor1, valor2;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    if (valor1 > valor2) {
        printf("VALOR1 é maior\n");
    } else if (valor2 > valor1) {
        printf("VALOR2 é maior\n");
    } else {
        printf("VALORES IGUAIS\n");
    }

    system("pause");
}
