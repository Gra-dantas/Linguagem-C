#include <stdio.h>

int main() {
 int x, y;
 printf ("Entre com o primeiro valor: ");
 scanf ("%d", &x);

 printf ("Entre com o segundo valor: ");
 scanf ("%d", &y);

 if (x>y)
    printf("O primeiro valor e maior que o segundo");
else
    printf("O segundo valor e maior que o primeiro");
}