#include <stdio.h>
/*4) Solicitar a idade de uma pessoa em anos, meses e dias; calcule e mostre a idade
expressa apenas em dias.*/

int main(void)
{
    int anos, meses, dias;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("meses: ");
    scanf("%d", &meses);

    printf("dias: ");
    scanf("%d", &dias);

    int idadeEmDias = anos * 365 + meses * 30 + dias;

    printf("A idade expressa em dias é: %d dias\n", idadeEmDias);

    return 0;
}
