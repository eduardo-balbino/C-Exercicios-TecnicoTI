#include <stdio.h>

int main() {
    int valor;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    if (valor % 10 == 0) {
        printf("Saque autorizado\n");
    } else {
        printf("Valor invalido para saque\n");
    }

    return 0;
}
