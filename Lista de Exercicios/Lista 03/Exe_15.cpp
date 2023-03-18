// Crie um algoritmo chamado Zodíaco. Este algoritmo deve solicitar parcialmente a data de nascimento (dia e mês) e
// apresentar o seu signo, conforme tabela abaixo:
// - 1 º signo do zodíaco: Aquário (21/jan a 19/fev)
// - 2º signo do zodíaco: Peixes (20/fev a 20/mar)
// - 3º signo do zodíaco: Áries (21/mar a 20/abr)
// - 4º signo do zodíaco: Touro (21/abr a 20/mai)
// - 5º signo do zodíaco: Gêmeos (21/mai a 20/jun)
// - 6º signo do zodíaco: Câncer (21/jun a 21/jul)
// - 7º signo do zodíaco: Leão (22/jul a 22/ago)
// - 8º signo do zodíaco: Virgem (23/ago a 22/set)
// - 9º signo do zodíaco: Libra (23/set a 22/out)
// - 10º signo do zodíaco: Escorpião (23/out a 21/nov)
// - 11º signo do zodíaco: Sagitário (22/nov a 21/dez)
// - 12º signo do zodíaco: Capricórnio (22/dez a 20/jan)
//  No final, pergunte ao usuário se ele deseja continuar (S ou N)

#include <stdio.h>
#include <conio.c>
#include <locale.h>

int main() {

  system("cls");
  setlocale(LC_ALL, "Portuguese");
  textcolor(3);

  int dia, mes;
  char continua;

  do {
    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &dia);

    printf("Digite o mes do seu nascimento: ");
    scanf("%d", &mes);

    if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19)) {
      printf("Aquario\n");
    }
    else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)) {
      printf("Peixes\n");
    }
    else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)) {
      printf("Aries\n");
    }
    else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)) {
      printf("Touro\n");
    }
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
      printf("Gemeos\n");
    }
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21)) {
      printf("Cancer\n");
    }
    else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22)) {
      printf("Leao\n");
    }
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
      printf("Virgem\n");
    }
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
      printf("Libra\n");
    }
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
      printf("Escorpiao\n");
    }
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
      printf("Sagitario\n");
    } else {
      printf("Capricornio\n");
    }

    printf("Deseja continuar? (S ou N): ");
    scanf(" %c", &continua);
    
  } while (continua == 'S' || continua == 's');
  
}
