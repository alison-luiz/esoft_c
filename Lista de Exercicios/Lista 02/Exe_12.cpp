// Calcule e apresente a média de 10 números fornecidos pelo usuário, utilizando o laço de repetição
// WHILE

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
    int i = 1;
    float num, sum = 0;

    while (i <= 10) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &num);
        sum += num;
        i++;
    }

    float average = sum / 10;
    printf("\nA média dos números digitados é: %.2f\n", average);

    system("pause");
}
