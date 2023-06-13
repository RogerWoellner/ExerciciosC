#include <stdio.h>

int main() {

    int num1, num2;
    
    num1= 10;
    num2 = 10;
    
    //== para comparar 2 números
    if(num1 == num2){
        printf("Os números %d e %d são iguais.", num1, num2);
    }
    else {
        printf("Os números %d e %d são diferentes.", num1, num2);
    }

    return 0;
}