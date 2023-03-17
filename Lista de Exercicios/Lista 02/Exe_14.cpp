// Faça um programa que apresente todos os números inteiros entre 12 e 25, na horizontal

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
    int num = 12;
    while (num <= 25) {
        printf("%d ", num);
        num++;
    }
    system("pause");
}
