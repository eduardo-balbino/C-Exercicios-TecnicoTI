#include <stdio.h>

int main() {
    int anoNascimento, idade;
    int anoAtual = 2025;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    if (idade >= 16) {
        printf("Voce pode votar!\n");
    } else {
        printf("Voce ainda nao pode votar.\n");
    }

    return 0;
}
