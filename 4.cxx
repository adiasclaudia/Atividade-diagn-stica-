#include <stdio.h>

int main() {
    float valor, desconto, valorFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);

    valorFinal = valor - (valor * desconto / 100);

    printf("Valor final do produto: R$ %.2f\n", valorFinal);

    return 0;
}