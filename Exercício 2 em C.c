#include <stdio.h>

int main() {

    float nota1, nota2, media;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2)/2;
    
    printf("A média é: %.2f", media);


    return 0;
}