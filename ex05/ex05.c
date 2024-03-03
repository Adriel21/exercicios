#include <stdio.h>
/*5) Solicitar o ano de nascimento de uma pessoa e o ano atual. Calcule e mostre a
idade da pessoa em anos, a idade da pessoa em meses e a idade da pessoa em
dias.*/
int main(void)
{
    int anoNascimento, anoAtual, idadeAnos, idadeMeses, idadeDias;

    printf("Informe o ano de seu nascimento\n");
    scanf("%d", &anoNascimento);

    printf("Informe o ano atual\n");
    scanf("%d", &anoAtual);

    idadeAnos = anoAtual - anoNascimento;
    idadeMeses = (anoAtual - anoNascimento) * 12;
    idadeDias = (anoAtual - anoNascimento) * 365;

    printf("Sua idade em anos: %d\n", idadeAnos);
    printf("Sua idade em meses:%d\n", idadeMeses);
    printf("Sua idade em dias:%d\n", idadeDias);

    return 0;
}