// Faça um programa que apresente todos os números inteiros, entre 14 e 30, na vertical

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
    int i;

    for (i = 14; i <= 30; i++) {
        printf("%d\n", i);
    }

    system("pause");
}
