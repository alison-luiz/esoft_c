// Repita o exercício anterior, utilizando o laço DO WHILE

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
  int primeiro, segundo, i;

  printf("Digite o primeiro valor: ");
  scanf("%d", &primeiro);
  printf("Digite o segundo valor (maior que o primeiro): ");
  scanf("%d", &segundo);

  if (segundo <= primeiro) {
    printf("O segundo valor deve ser maior que o primeiro!\n");
  } else {
    i = primeiro;
    do {
      printf("%d\n", i);
      i++;
    } while (i <= segundo);
  }

  system("pause");
}
