#include <stdio.h>
#include <stdlib.h>

int main (){
char s[10];

printf ("Digite algo (scanf convencional);\n");
scanf ("%s", s);
fflush (stdin);

printf ("Resultado: %s\n\n", s);

printf ("Digite algo (scanf aprimorado): \n");
scanf ("%9[^\n]s");
fflush (stdin);

printf("Resultado: %s\n\n", s);




}