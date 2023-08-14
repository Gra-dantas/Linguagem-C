#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    printf("----------------------------------------\n");
    printf("             M A T R I Z E S \n");
    printf("----------------------------------------\n\n");

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d] [%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    printf("\nImprimindo toda a matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d] [%d]: %d ", i, j, mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMultiplicando por 5...\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mat[i][j] = mat[i][j] * 5;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}