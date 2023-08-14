#include <stdio.h>
#include <stdlib.h>

int main ()
{
 /*
 >  Maior (A maior B)
 <  Menor (A menor B)
 >- Menor Igual (A menor igual a B)
 <= Maior Igual (A maior igual a B)
 != Nao iguak ou Diferente (A diferente de B)
 == Igual (A igual a B)
 */

int a, b;
printf ("Insira o valor de A \n");
scanf ("%d", &a); 

printf ("Insira o valor de B \n");
scanf ("%d", &b); 

if (a > b){
    printf ("%d eh maior que %d", a, b);
}

else if (a == b){
    printf ("%d eh igual que %d", a, b);
}
else{
    printf ("%d eh menor que %d", a, b);
}



return 0;
}