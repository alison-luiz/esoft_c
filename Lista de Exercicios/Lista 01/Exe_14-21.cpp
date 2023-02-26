#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <locale.h>
#include <math.h>
#define PI 3.14159265358979323846

main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");
    textcolor(3);

    // Exercicio 14 - AREA = (BASE x ALTURA) / 2. Área de um Triângulo
    float area, base, altura;
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    fflush(stdin);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    fflush(stdin);
    area = (base * altura) / 2;
    printf("Area e igual a: %.2f\n\n\n", area);

    // Exercicio 15 -  CAC = 3.1416 * R². Lembre-se que R² é o mesmo que (R * R). Área de um Círculo
    double  areaCirculo, raio;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);
    fflush(stdin);
    areaCirculo = PI * raio * raio;
    printf("A area do circulo e: %lf\n\n\n", areaCirculo);

    // Exercicio 16 - CPC = 2* 3.1416 * R Perímetro de Círculo
    double raioCirculo, perimetroCirculo;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raioCirculo);
    fflush(stdin);
    perimetroCirculo = 2 * PI * raioCirculo;
    printf("O perimetro do circulo e: %lf\n\n\n", perimetroCirculo);

    // Exercicio 17 - CVC = (3.1416 * R²) * H Volume de Círculo
    double raio17, altura17, volume17;
    printf("Digite o raio da base do circulo: ");
    scanf("%lf", &raio17);
    fflush(stdin);
    printf("Digite a altura do circulo: ");
    scanf("%lf", &altura17);
    fflush(stdin);
    volume17 = PI * raio17 * raio17 * altura17;
    printf("O volume do circulo e: %lf\n\n\n", volume17);
    
    // Exercicio 18 -  VCN = ((3.1416 * R²) / 3) * H Volume de um Cone
    double raio18, altura18, volume18;
    printf("Digite o raio da base do cone: ");
    scanf("%lf", &raio18);
    fflush(stdin);
    printf("Digite a altura do cone: ");
    scanf("%lf", &altura18);
    fflush(stdin);
    volume18 = (1.0 / 3.0) * PI * raio18 * raio18 * altura18;
    printf("O volume do cone é: %lf\n\n\n", volume18);

    // Exercicio 19 - VPD = (L * L) * (H / 3) Volume de Pirâmide
    double lado19, altura19, areaBase19, volume19;
    printf("Digite o comprimento do lado da base da piramide: ");
    scanf("%lf", &lado19);
    fflush(stdin);
    printf("Digite a altura19 da piramide: ");
    scanf("%lf", &altura19);
    fflush(stdin);
    areaBase19 = lado19 * lado19;
    volume19 = (1.0 / 3.0) * areaBase19 * altura19;
    printf("O volume da piramide e: %lf\n\n\n", volume19);

    // Exercicio 20 - VPM = L1 * L2 * L3 Volume de Prisma
    double lado20, altura20, areaBase20, volume20;
    printf("Digite o comprimento do lado da base do prisma: ");
    scanf("%lf", &lado20);
    fflush(stdin);
    printf("Digite a altura do prisma: ");
    scanf("%lf", &altura20);
    fflush(stdin);
    areaBase20 = lado20 * lado20;
    volume20 = areaBase20 * altura20;
    printf("O volume do prisma e: %lf\n\n\n", volume20);

    // Exercicio 21 - VEF = (4/3) * 3.1416) * R³ Volume de Esfera.
    double raio21, volume21;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio21);
    fflush(stdin);
    volume21 = (4.0 / 3.0) * PI * pow(raio21, 3);
    printf("O volume da esfera e: %lf\n\n\n", volume21);

    system("pause");
    return 0;
}