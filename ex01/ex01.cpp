#include <stdio.h>
// 1) Um funcionário recebe um salário mensal, que deve ter 15% de desconto e um
// acréscimo de 100 reais. Exibir o salário final após os cálculos.

int main(void)
{
    float salario;
    printf("Digite o valor do salario\n");
    scanf("%f", &salario);
    salario = (salario - salario * 0.15) + 100;
    printf("Salario final a: %.2f\n", salario);

    return 0;
}
