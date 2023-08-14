#include <stdio.h>

int main() {
    
    int variavel1 = 10;
    int variavel2 = 20;
    int result_soma, result_sub, result_div, result_mult;
    printf("---------------------------------------\n");
    printf("         Bem vindo a Calculadora\n\n");
    printf("---------------------------------------\n");
    printf("opcao 1 - Soma\n");
    printf("opcao 2 - Subtracao\n");
    printf("opcao 4 - Divisao\n");
    printf("opcao 3 - Multiplicacao\n\n");

    result_soma = variavel1 + variavel2;
    result_sub = variavel1 - variavel2;
    result_div = variavel1 / variavel2;
    result_mult = variavel1 * variavel2;
    printf("Valores pre-definidos:\n");
    printf("Primeiro Valor: 10\n");
    printf("Segundo Valor:print 20\n");


    printf("Realizando calculo...\n\n");
    printf("Resultado da soma: %d\n", result_soma);
    printf("Resultado da subtracao: %d\n", result_sub);
    printf("Resultado da divisao: %d\n", result_div);
    printf("Resultado da multiplicacao: %d\n", result_mult);
    
    return 0;
}