// Solicite 3 notas, calcule a média e apresente se o aluno está APROVADO ou REPROVADO,
// considerando média mínima 6,0 para aprovação.

#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <locale.h>

int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);

    float notas[3], media = 0;
    
    for(int i = 0; i < 3; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    
    media /= 3;
    
    if(media >= 6.0) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }
    
    system("pause");

}