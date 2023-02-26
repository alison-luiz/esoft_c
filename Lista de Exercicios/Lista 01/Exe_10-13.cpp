#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    textcolor(3);

    // Exercicio 10
    int num1, num2, num3;
    printf("Digite treis numeros a seguir:\n");
    scanf("%i %i %i", &num1, &num2, &num3);
    fflush(stdin);
    int soma = (num1 + num2) - num3;
    printf("O resultado a soma %i + %i - %i e: %i\n\n\n", num1, num2, num3, soma);

    // Exercicio 11
    int num01, num02, num03;
    printf("Digite treis numeros a seguir:\n");
    scanf("%i %i %i", &num01, &num02, &num03);
    fflush(stdin);
    printf("Lado: %i\n", num01);
    printf("Altura: %i\n", num02);
    printf("Comprimento: %i\n", num03);
    int z = ((num01 + num02) * 2) / num03;
    printf("Valor de Z=(L+A * 2) / 2 e: %i\n\n\n", z);

    // Exercicio 12
    float num100, num125;
    printf("Digite um numero a seguir:\n");
    scanf("%f", &num100);
    fflush(stdin);
    num125 = (num100 * 0.25) + num100;
    printf("Valor com mais 25%% de aumento do numero digitado e: %.2f\n\n\n", num125);

    // Exercicio 13
    float numero01, numero02, numero03;
    printf("Digite dois numeros a seguir:\n");
    scanf("%f %f", &numero01, &numero02);
    fflush(stdin);
    numero03 = numero01 + numero02;
    printf("Valor da soma dos dois numeros digitados e: %.2f\n\n\n", numero03);

    system("pause");
    return 0;
}