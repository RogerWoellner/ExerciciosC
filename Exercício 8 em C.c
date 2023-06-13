#include <stdio.h>

int main() {

    int num, ant, suc;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &num);
    
    ant = num - 1;
    suc = num + 1;
    
    printf("\nAntecessor: %d", ant);
    printf("\nSucessor: %d", suc);

    return 0;
}