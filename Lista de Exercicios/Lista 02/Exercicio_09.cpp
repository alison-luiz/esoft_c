// Solicite um número inteiro e apresente ao usuário se o mesmo está no intervalo entre 50 e 100.

#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (num >= 50 && num <= 100) {
        printf("O número está no intervalo entre 50 e 100.\n");
    } else {
        printf("O número não está no intervalo entre 50 e 100.\n");
    }
    
    return 0;
}
