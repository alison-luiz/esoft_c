#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    textcolor(5);

    int num;
    printf("Digite um número: ");
    scanf("%i", &num);
    fflush(stdin);

    // Apresentando o dobro, triplo e a metade do número solicitado
    printf("O dobro de %i e: %i\n", num, num * 2);
    printf("O triplo de %i e: %i\n", num, num * 3);
    printf("A metade de %i e: %.2i\n", num, num / 2);

    float num2;
    printf("Digite um numero: ");
    scanf("%f", &num2);
    fflush(stdin);

    // Apresentando 25% e 60% do número solicitado
    printf("25%% de %.2f e %.2f\n", num2, num2 * 0.25);
    printf("60%% de %.2f e %.2f\n", num2, num2 * 0.6);

    float num3, num4;
    printf("Digite dois numero:\n");
    scanf("%f %f", &num3, &num4);
    fflush(stdin);

    // Apresentando 45% da soma entre os dois números solicitados
    float soma = num3 + num4;
    printf("45%% da soma de %.2f e %.2f e %.2f\n", num3, num4, soma * 0.45);

    float num5, num6;
    printf("Digite dois numero:\n");
    scanf("%f %f", &num5, &num6);
    fflush(stdin);

    // Apresentando a subtração dos dois números solicitados
    float subtracao = num5 - num6;
    printf("O resultado da subtração de %.2f por %.2f e %.2f\n", num5, num6, subtracao);

    system("pause");
    return 0;
}