// A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça um
// Programa em linguagem C que receba um valor de uma compra e mostre o valor das prestações

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
  float valorCompra, valorPrestacao;

  printf("Digite o valor da compra: ");
  scanf("%f", &valorCompra);

  valorPrestacao = valorCompra / 5;

  printf("O valor de cada prestação é de: R$%.2f\n", valorPrestacao);

  system("pause");
}
