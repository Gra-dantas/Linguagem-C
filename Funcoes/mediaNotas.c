#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float NFp, ava1, ava2;

    float A1, A2;

    printf("\n\nCalculo notas faculdade\n\n");

    printf("Digite a nota de (trabalho 01) avaliacao 1: ");
    scanf("%f", &ava1);

    printf("Digite a nota de (trabalho 02) avaliacao 2: ");
    scanf("%f", &ava2);

    printf("Digite a nota (prova) da AV2: ");
    scanf("%f", &A2);

    A1 = ((ava1 + ava2) / 2) * 0.4;
    A2 = A2 * 0.6;
    NFp = A1 + A2;

    if (NFp > 6){
        printf("\nNFp maior ou igual a 6,0 = Aprovado, media: %.1f", NFp);
    }
    else if (NFp < 6)
        printf("\nNFp menor que 6,0 = Reprovado, media: %.1f ", NFp);

    return 0;

}