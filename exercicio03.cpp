#include <stdio.h>

int main() {
    float preco, desconto, precoFinal;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    if (preco < 50) {
        printf("Sem desconto\n");
        printf("Preco final: R$ %.2f\n", preco);
    }
    else if (preco >= 50 && preco < 100) {
        desconto = preco * 0.10;
        precoFinal = preco - desconto;

        printf("Desconto de 10%% aplicado\n");
        printf("Preco final: R$ %.2f\n", precoFinal);
    }
    else {
        desconto = preco * 0.20;
        precoFinal = preco - desconto;

        printf("Desconto de 20%% aplicado\n");
        printf("Preco final: R$ %.2f\n", precoFinal);
    }

    return 0;
}
