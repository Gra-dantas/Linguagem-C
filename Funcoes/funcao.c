#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int v1, v2, resultado;
    printf ("Digite o valor 01: \n");
    scanf ("%d", &v1);
    printf ("Digite o valor 02: \n");
    scanf ("%d", &v2);

    resultado = multiplicacao (v1, v2);
    printf ("Multiplicando o primeiro valor com o segundo\n");
    printf ("O resultado eh: %d \n", resultado);

    return 0;

}
int multiplicacao (int N1, int N2)
{
    int resultado;
    resultado = N1 * N2;
    return (resultado);
}