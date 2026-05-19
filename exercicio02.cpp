#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Magreza\n");
    }
    else if (imc >= 18.5 && imc <= 24.9) {
        printf("Normal\n");
    }
    else if (imc >= 25.0 && imc <= 29.9) {
        printf("Sobrepeso\n");
    }
    else if (imc >= 30.0 && imc <= 39.9) {
        printf("Obesidade\n");
    }
    else {
        printf("Obesidade Grave\n");
    }

    return 0;
}
