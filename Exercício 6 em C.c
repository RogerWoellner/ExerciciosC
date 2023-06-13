#include <stdio.h>

int main() {

    float base, altura, calc;
    
    printf("Informe a base do triângulo: ");
    scanf("%f", &base);
    
    printf("Informe a altura do triângulo: ");
    scanf("%f", &altura);
    
    calc = base * altura/2;
    
    printf("Área do triângulo é: %.2f", calc);

    return 0;
}