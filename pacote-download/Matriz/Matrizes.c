#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int mat [3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    printf ("****************************************\n");
    printf ("             M A T R I Z E S \n");
    printf ("****************************************\n\n");
    printf ("\n\nImprimindo toda a matriz \n");
    for ( i = 0; i<3; i++){
        for ( j = 0; j<3; j++){
            printf("%d ", mat [i] [j]);
        }
        printf("\n");
}

printf ("\n\nMultiplicando ... \n");
    for ( i = 0; i<3; i++){
        for ( j = 0; j<3; j++){
            printf("%d ", mat [i] [j] * 5);
        }
        printf("\n");
}
return 0;

}