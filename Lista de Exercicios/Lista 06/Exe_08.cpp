#include <stdio.h>
#include <string.h>

int validar_cpf(char cpf[]) {
    int soma = 0, resto, digito1, digito2;

    if (strlen(cpf) != 11) {
        return 0;
    }

    for (int i = 0; i < 9; i++) {
        soma += (cpf[i]-'0') * (10-i);
    }
    resto = soma % 11;
    if (resto < 2) {
        digito1 = 0;
    } else {
        digito1 = 11 - resto;
    }

    if (digito1 != cpf[9]-'0') {
        return 0;
    }

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i]-'0') * (11-i);
    }
    resto = soma % 11;
    if (resto < 2) {
        digito2 = 0;
    } else {
        digito2 = 11 - resto;
    }

    if (digito2 != cpf[10]-'0') {
        return 0;
    }

    return 1;
}

int main() {
    char cpf[12];

    printf("Digite um CPF (somente numeros): ");
    scanf("%s", cpf);

    if (validar_cpf(cpf)) {
        printf("O CPF digitado eh valido.\n");
    } else {
        printf("O CPF digitado nao eh valido.\n");
    }

    return 0;
}
