#include <stdio.h>
#include <stdlib.h>

int verificarParImpar(int numero) {
    if (numero % 2 == 0) {
        return 1; // Número par
    } else {
        return 0; // Número ímpar
    }
}

int main() {
    int numeroInicial, numeroFinal, quantidadePares = 0;

    printf("Digite o número inicial: ");
    scanf("%d", &numeroInicial);

    printf("Digite o número final: ");
    scanf("%d", &numeroFinal);

    printf("Números e suas classificações:\n");
    for (int i = numeroInicial; i <= numeroFinal; i++) {
        int parImpar = verificarParImpar(i);

        printf("%d - ", i);
        if (parImpar == 1) {
            printf("Par\n");
            quantidadePares++;
        } else {
            printf("Ímpar\n");
        }
    }

    printf("\nQuantidade total de números pares: %d\n", quantidadePares);

    return 0;
}
