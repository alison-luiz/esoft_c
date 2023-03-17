// Solicitar o nome, idade, sexo e salário de uma pessoa. Posteriormente, faça o reajuste do salário de
// acordo com as condições abaixo e posteriormente apresente o novo salário (com reajuste):
// - Acima de 50 anos, reajuste de 35%
// - Mulheres com até 24 anos, reajuste de 18%
// - Homens com até 27 anos, reajuste de 17,5%
// - Mulheres entre 25 e 50 anos, reajuste de 23%
// - Homens entre 28e 38 anos, reajuste de 21%
// - Homens entre 39 e 50 anos, reajuste de 23%

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sexo;
    int idade;
    float salario, novo_salario;
    
    // solicita os dados do usuário
    printf("Digite o nome: ");
    fgets(nome, 50, stdin);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo);
    printf("Digite o salário: ");
    scanf("%f", &salario);
    
    // realiza o reajuste de acordo com as condições
    if (idade > 50) {
        novo_salario = salario * 1.35;
    } else if (sexo == 'F' && idade <= 24) {
        novo_salario = salario * 1.18;
    } else if (sexo == 'M' && idade <= 27) {
        novo_salario = salario * 1.175;
    } else if (sexo == 'F' && idade >= 25 && idade <= 50) {
        novo_salario = salario * 1.23;
    } else if (sexo == 'M' && idade >= 28 && idade <= 38) {
        novo_salario = salario * 1.21;
    } else if (sexo == 'M' && idade >= 39 && idade <= 50) {
        novo_salario = salario * 1.23;
    } else {
        novo_salario = salario;
    }
    
    // apresenta o novo salário com reajuste
    printf("\n%s", nome);
    printf("Novo salário: %.2f", novo_salario);
    
    return 0;
}
