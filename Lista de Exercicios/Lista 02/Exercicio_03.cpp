// Solicite duas notas e indague ao usuário se ele deseja fazer prova substitutiva. Caso ele decida fazer,
// solicite a nota da mesma. Posteriormente, calcule a média e apresente a situação do aluno APROVADO
// ou REPROVADO.

#include <stdio.h>

int main() {
    float nota1, nota2, media, substitutiva;
    char resposta;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A média do aluno é: %.2f\n", media);

    printf("Deseja fazer prova substitutiva? (S/N) ");
    scanf(" %c", &resposta);

    if (resposta == 'S' || resposta == 's') {
        printf("Digite a nota da prova substitutiva: ");
        scanf("%f", &substitutiva);

        media = (nota1 + nota2 + substitutiva) / 3;
    }

    if (media >= 6.0) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
