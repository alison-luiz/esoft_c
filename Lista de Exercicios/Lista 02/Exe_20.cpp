// Construa um Programa em linguagem C que solicite dois valores inteiros e apresente a produto de um
// pelo outro sem no entanto utilizar o operador aritmético de multiplicação. Utilize o laço FOR

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
  int num1, num2, produto = 0;

  printf("Digite o primeiro valor inteiro: ");
  scanf("%d", &num1);
  printf("Digite o segundo valor inteiro: ");
  scanf("%d", &num2);

  for (int i = 0; i < num2; i++) {
    produto += num1;
  }

  printf("O produto de %d e %d é: %d\n", num1, num2, produto);

  system("pause");
}
