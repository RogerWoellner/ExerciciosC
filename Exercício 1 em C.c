#include <stdio.h>

int main() {

    int num1, num2, soma;
  
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
  
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    
    soma = num1 * num2;
    
    printf("O resultado é: %d", soma);


    return 0;
}