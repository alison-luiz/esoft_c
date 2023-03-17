// Repita o exercício anterior, utilizando o laço DO WHILE

#include <stdio.h>

int main() {
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
    // Usa um laço DO WHILE para imprimir todos os números entre o primeiro e o segundo valor
    i = primeiro;
    do {
      printf("%d\n", i);
      i++;
    } while (i <= segundo);
  }

  return 0;
}
