// Solicite dois valores, onde o segundo deverá ser maior que o primeiro. Posteriormente, apresente na
// vertical, todos os números entre o primeiro valor e o segundo. Utilize o laço FOR

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
  int primeiro, segundo, i;

  // Solicita dois valores ao usuário
  printf("Digite o primeiro valor: ");
  scanf("%d", &primeiro);
  printf("Digite o segundo valor (maior que o primeiro): ");
  scanf("%d", &segundo);

  // Verifica se o segundo valor é maior que o primeiro
  if (segundo <= primeiro) {
    printf("O segundo valor deve ser maior que o primeiro!\n");
  } else {
    // Usa um laço FOR para imprimir todos os números entre o primeiro e o segundo valor
    for (i = primeiro; i <= segundo; i++) {
      printf("%d\n", i);
    }
  }

  system("pause");
}
