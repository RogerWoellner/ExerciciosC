#include <stdio.h>

int main() {

    float celsius, conver;
    
    printf("Informe a temperatura em ºCelsius: ");
    scanf("%f", &celsius);
    
    conver = 1.8 * celsius + 32;
    
    printf("Temperatura em Fahrenheit é: %.1f", conver);

    return 0;
}