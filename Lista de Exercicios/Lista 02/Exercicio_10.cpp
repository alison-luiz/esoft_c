// Calcule e apresente a média de 10 números fornecidos pelo usuário, utilizando o laço de repetição FOR

#include <stdio.h>

int main() {
   int i, num;
   float soma = 0, media;
   
   printf("Digite 10 numeros:\n");
   for(i=1; i<=10; i++) {
      printf("Numero %d: ", i);
      scanf("%d", &num);
      soma += num;
   }
   
   media = soma / 10.0;
   
   printf("A media dos numeros digitados eh: %.2f", media);
   
   return 0;
}
