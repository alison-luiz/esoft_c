//Exercicio 2
//Construa um programa em linguagem C, que apresente todos os números PRIMOS entre 1 e 500. 
//O programa deverá possuir uma função ao qual retorne se um determinado número é ou não primo (bool)
//obs. Utilize o método de prototipação

#include <stdio.h>
#include <stdbool.h>
#include <conio.c>

bool numPrimo(int num);

int main() {

    system("cls");
    textcolor(3);

    int x;
    for (x = 1; x <= 500; x++) {
        if (numPrimo(x)) {
            printf("%d ", x);
        }
    }
}

bool numPrimo(int num) {
    
    int x;

    if (num <= 1) {
        return false;
    }

    for (x = 2; x <= num / 2; x++) {
        if (num % x == 0) {
            return false;
        }
    }

}
