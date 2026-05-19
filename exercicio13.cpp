#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0 && numero <= 100) {
        printf("Numero valido\n");
    } else {
        printf("Fora do intervalo permitido\n");
    }

    return 0;
}
