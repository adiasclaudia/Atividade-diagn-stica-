#include <stdio.h>

int main() {
    float salarioBase, valorHoraExtra;
    int horasExtras;

    printf("Salario base: "); scanf("%f", &salarioBase);
    printf("Valor da hora extra: "); scanf("%f", &valorHoraExtra);
    printf("Horas extras: "); scanf("%d", &horasExtras);

    printf("Salario final: R$ %.2f\n", salarioBase + valorHoraExtra * horasExtras);
    return 0;
}