#include <stdio.h>
#include<stdlib.h>

int main ()
{

//Números Inteiros: 1, 0, -1, -50
//Marcadores de Posição: %d

//Números Floats: 2.1, 5.500, 0.002, -0.92
//Marcadores de Posição: %f

printf ("O numero %d eh um numero inteiro \n", 2);
printf ("O numero %1.1f eh um numero float \n", 0.2);

// soma +
// subtração -
// Multiplicação *
// Divisão /

printf ("Soma de 5 + 2: %d \n", 5 + 2);
printf ("Subtracao de 5 - 2: %d \n", 5 - 2);
printf ("Multiplicacao de 5 * 2: %d \n", 5 * 2.0);
printf ("Divisao de 5 / 2: %d \n", 5 / 2);

return 0;
}