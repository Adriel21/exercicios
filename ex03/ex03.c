#include <stdio.h>
/*3) Um supermercado tem 2 produtos em promoção, sendo que, para cada um
deles, há um desconto diferente: para o primeiro produto, deve ser dado um
desconto de 8%; para o segundo, um desconto de 12%. Mostre os preços finais
dos 2 produtos após os cálculos.*/
int main(void)
{
    const float descontoUm = 0.08, descontoDois = 0.12;
    float produtoUm, produtoDois;

    printf("Informe o valor do primeiro produto\n");
    scanf("%f", &produtoUm);

    printf("Informe o valor do segundo produto\n");
    scanf("%f", &produtoDois);

    produtoUm = produtoUm - produtoUm * descontoUm;
    produtoDois = produtoDois - produtoDois * descontoDois;

    printf("Valor final de cada produto com desconto\n");
    printf("Primeiro Produto: %.2f\n", produtoUm);
    printf("Segundo Produto: %.2f\n", produtoDois);

    return 0;

}