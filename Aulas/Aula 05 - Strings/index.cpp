#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

char nome[40] = "Alison";
char nome1[40] = "Luiz";
// Para copiar uma string para outra uso o seguinte código
//    DESTINHO, ORIGEN
strncpy(nome, nome1, 6);
printf("%s\n\n\n", nome);

system("pause");
system("cls");

char nome2[30];
int x=0;
printf("Digite o nome? ");
gets(nome2);
while (nome2[x] != '\0') {
    printf("%c\n", nome2[x]);
    x++;
}

system("pause");
system("cls");

char nome3[50], nome4[50];
int y;
printf("Digite o nome 01? ");
gets(nome3);
printf("Digite o nome 02? ");
gets(nome4);

// Comparação do maior em relação a ordem da primeira letra da string
y = strcmp(nome3, nome4);

printf("%i", y);

switch (y)
{
case 0:
    printf("Os dois nomes são iguais\n");
    break;
case 1:
    printf("O primeiro nome e maior\n");
    break;
case -1:
    printf("O segundo nome e maior\n");
    break;
default:
    break;
}

}



