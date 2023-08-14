#include <stdio.h>

int main() 
{
    int codigoCliente, voto, totalClientes = 0, somaSatisfacao = 0;
    float mediaSatisfacao;

    while (1) {
        printf("Digite o código do cliente (0 para sair): ");
        scanf("%d", &codigoCliente);

        if (codigoCliente == 0)
            break;

        printf("Digite o voto de satisfação do cliente (entre 1 e 10): ");
        scanf("%d", &voto);

        if (voto >= 1 && voto <= 10) {
            totalClientes++;
            somaSatisfacao += voto;
        } else {
            printf("Voto inválido! Por favor, insira um valor entre 1 e 10.\n");
        }
    }

    if (totalClientes > 0) {
        mediaSatisfacao = (float)somaSatisfacao / totalClientes;
        printf("\nObrigado e volte sempre!!!\n");
        printf("Número de clientes que responderam: %d\n", totalClientes);
        printf("Média de satisfação: %.2f\n", mediaSatisfacao);
    } else {
        printf("Nenhum cliente respondeu.\n");
    }

    return 0;
}