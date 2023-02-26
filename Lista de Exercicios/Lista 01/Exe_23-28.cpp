#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <locale.h>
#include <math.h>
#define PI 3.14159265358979323846

main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);

    // Exercicio 23 - Ler 3 notas e apresentar a média das mesmas.
    float nota01, nota02, nota03, media;
    printf("Digite 03 notas para calcular a media:\n");
    scanf("%f %f %f", &nota01, &nota02, &nota03);
    fflush(stdin);
    media = (nota01 + nota02 + nota03) / 3;
    printf("A media das notas %.2f, %.2f e %.2f: %.2f\n\n\n", nota01, nota02, nota03, media);

    // Exercicio 24 - Ler 6 notas e apresentar a soma das mesmas.
    float nota, media24 = 0;
    for (int i = 1; i <= 6; i++) {
        printf("Digite a %i nota para calcular a media: ", i);
        scanf("%f", &nota);
        fflush(stdin);
        media24 += nota;
    }
    printf("A media das notas e: %.2f\n\n\n", (media24 / 6));

    // Exercicio 25 - Conhecido 3 números inteiros, apresente o resultado da
    // multiplicação dos mesmos
    int numeros25[3], multi25;
    for (int i = 1; i <= 3; i++) {
        do {
        printf("Digite o %i numero (0 a 100): ", i);
        scanf("%i", &numeros25[i]);
        fflush(stdin);
        } while (numeros25[i] < 0 || numeros25[i] > 100);
    }
    multi25 = numeros25[1] * numeros25[2] * numeros25[3];
    printf("A multiplicacao de %i, %i e %i: %i\n\n\n", numeros25[1], numeros25[2], numeros25[3], multi25);

    // Exercicio 26 - Informado 3 números, apresente a soma do primeiro com o terceiro, 
    // multiplicando pelo segundo.
    int numeros26[3], conta26;
    for (int i = 1; i <= 3; i++) {
        do {
        printf("Digite o %i numero (0 a 100): ", i);
        scanf("%i", &numeros26[i]);
        fflush(stdin);
        } while (numeros26[i] < 0 || numeros26[i] > 100);
    }
    conta26 = (numeros26[1] + numeros26[3]) * numeros25[2];
    printf("A soma de %i + %i * %i: %i\n\n\n", numeros25[1], numeros25[3], numeros25[2], conta26);

    // Exercicio 27 - Sendo dado dois números pelo usuário,
    // apresente a décima parte da subtração de um pelo outro, utilizando uma terceira variável.
    float num1, num2, resultado;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    resultado = (num1 - num2) / 10;
    printf("A décima parte da subtração de %.2f por %.2f é: %.2f\n", num1, num2, resultado);

    // Exercicio 28 - Baseado no exercício anterior, faça o mesmo processo
    // sem fazer uso de uma terceira variável.
    float num01, num02;
    printf("Digite o primeiro número: ");
    scanf("%f", &num01);
    printf("Digite o segundo número: ");
    scanf("%f", &num02);
    printf("A décima parte da subtração de %.2f por %.2f é: %.2f\n", num1, num2, (num01 - num02) / 10);

    system("pause");
    return 0;
}