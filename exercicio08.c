#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Numero 1: ");
    scanf("%f", &num1);

    printf("Numero 2: ");
    scanf("%f", &num2);

    printf("Operador (+, -, *, /): ");
    scanf(" %c", &operador);

    if (operador == '+') {
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (operador == '-') {
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (operador == '*') {
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (operador == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: divisao por zero!\n");
        }
    }
    else {
        printf("Operador invalido!\n");
    }

    return 0;
}
