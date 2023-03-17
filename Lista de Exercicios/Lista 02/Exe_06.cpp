// Solicite o nome e a idade de 2 pessoas. Posteriormente, apresente o NOME da pessoa mais velha,
// seguida de uma frase “é a mais velha”, ou a mensagem “As pessoas possuem a mesma idade”


#include <stdio.h>
#include <string.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);
    
    char nome1[50], nome2[50];
    int idade1, idade2;

    printf("Digite o nome e a idade da primeira pessoa:\n");
    scanf("%s %d", nome1, &idade1);

    printf("Digite o nome e a idade da segunda pessoa:\n");
    scanf("%s %d", nome2, &idade2);

    if (idade1 > idade2) {
        printf("%s é a mais velha.\n", nome1);
    } else if (idade2 > idade1) {
        printf("%s é a mais velha.\n", nome2);
    } else {
        printf("As pessoas possuem a mesma idade.\n");
    }

    system("pause");
}
