#include <stdio.h>

int main() {

    float alt;
    char genero;
    
    printf("Informe sua altura: ");
    scanf("%f", &alt);
    
    printf("Informe o gênero: ");
    scanf(" %c", &genero);
    
    if (genero == 'M' || genero == 'm') {
        printf("Peso ideal: %f", 72.7 * alt - 58);
    }
    else if (genero == 'F') {
        printf("Peso ideal: %f", 62.1 * alt - 44.7);
    }
    else {
        printf("Caracter inválido"); 
    }

    return 0;
}