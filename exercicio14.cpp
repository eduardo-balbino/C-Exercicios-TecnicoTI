#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("%s: Pode dirigir\n", nome);
    } else {
        printf("%s: Ainda nao pode dirigir\n", nome);
    }

    return 0;
}
