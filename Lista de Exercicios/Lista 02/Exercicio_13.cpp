// Solicite dois valores inteiros, onde o primeiro deverá estar entre 10 e 50 e o segundo deverá ser maior
// que o primeiro, em ao menos 15 unidades. Posteriormente, apresente a soma do primeiro com o
// segundo.


#include <stdio.h>

int main() {
    int primeiro, segundo, soma;
    
    do {
        printf("Digite um valor inteiro entre 10 e 50: ");
        scanf("%d", &primeiro);
    } while (primeiro < 10 || primeiro > 50);
    
    do {
        printf("Digite um valor inteiro maior que %d em ao menos 15 unidades: ", primeiro);
        scanf("%d", &segundo);
    } while (segundo <= primeiro + 15);
    
    soma = primeiro + segundo;
    printf("A soma de %d e %d é: %d\n", primeiro, segundo, soma);
    
    return 0;
}
