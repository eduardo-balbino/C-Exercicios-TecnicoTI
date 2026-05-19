#include <stdio.h>

int main() {
    char nome[50];
    float frequencia;

    printf("Digite o nome do usuario: ");
    scanf("%s", nome);

    printf("Digite a frequencia (0 a 100): ");
    scanf("%f", &frequencia);

    if (frequencia < 75) {
        printf("%s: Reprovado por falta\n", nome);
    } else {
        printf("%s: Frequencia adequada\n", nome);
    }

    return 0;
}
