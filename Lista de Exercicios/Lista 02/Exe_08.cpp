// Solicite 5 números e apresente: O maior, o menor e a média. Obs. Não utilizar laço de repetição

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
    int num1, num2, num3, num4, num5;
    int maior, menor, soma;
    float media;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);
    printf("Digite o 2º número: ");
    scanf("%d", &num2);
    printf("Digite o 3º número: ");
    scanf("%d", &num3);
    printf("Digite o 4º número: ");
    scanf("%d", &num4);
    printf("Digite o 5º número: ");
    scanf("%d", &num5);

    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
        maior = num1;
    } else if (num2 > num3 && num2 > num4 && num2 > num5) {
        maior = num2;
    } else if (num3 > num4 && num3 > num5) {
        maior = num3;
    } else if (num4 > num5) {
        maior = num4;
    } else {
        maior = num5;
    }

    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
        menor = num1;
    } else if (num2 < num3 && num2 < num4 && num2 < num5) {
        menor = num2;
    } else if (num3 < num4 && num3 < num5) {
        menor = num3;
    } else if (num4 < num5) {
        menor = num4;
    } else {
        menor = num5;
    }

    soma = num1 + num2 + num3 + num4 + num5;
    media = (float) soma / 5;

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média dos números: %.2f\n", media);

    system("pause");
}
