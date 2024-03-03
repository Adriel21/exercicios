#include <stdio.h>
/*2) Em uma escola, um aluno tem sua média calculada a partir da média ponderada
de três notas, sendo que a primeira nota vale 20% da média final, a segunda vale
35% e a terceira vale 45%. Exibir a média final após os cálculo*/
int main(void){
    float notaUm, notaDois, notaTres, media;
    printf("Digite o valor de cada nota\n");
    printf("Nota 1\n");
    scanf("%f", &notaUm);
    printf("Nota 2\n");
    scanf("%f", &notaDois);
    printf("Digite o valor de cada nota\n");
    printf("Nota 3\n");
    scanf("%f", &notaTres);

    notaUm = notaUm*0.20;
    notaDois = notaDois*0.35;
    notaTres = notaTres*0.45;

    media = notaUm + notaDois + notaTres;

    printf("Sua media e de: %.2f\n ", media);

    return 0;

}