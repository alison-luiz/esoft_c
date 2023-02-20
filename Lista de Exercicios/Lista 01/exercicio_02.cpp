#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main() {

    setlocale(LC_ALL, "portuguese");

    int num;
    printf("Digite um número: ");
    scanf("%i", &num);
    fflush(stdin);
    printf("O dobro de %i é: %i\n", num, num * 2);
    printf("O triplo de %i é: %i\n", num, num * 3);
    printf("A metade de %i é: %.2i\n", num, num / 2);

    float num2;
    printf("Digite um número: ");
    scanf("%f", &num2);
    printf("25%% de %.2f é %.2f\n", num2, num2 * 0.25);
    printf("60%% de %.2f é %.2f\n", num2, num2 * 0.6);

    float num3, num4;
    printf("Digite dois número:\n");
    scanf("%f %f", &num3, &num4);
    float soma = num3 + num4;
    printf("45%% da soma de %.2f e %.2f é %.2f\n", num3, num4, soma * 0.45);

    float num5, num6;
    printf("Digite dois números:\n");
    scanf("%f %f", &num5, &num6);
    float subtracao = num5 - num6;
    printf("A subtração de %.2f por %.2f é %.2f\n", num5, num6, subtracao);

    system("pause");
}