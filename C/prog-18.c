#include <stdio.h>

int main()
{
    int comando;
    float saldo;
    float valor;

    do
    {
        printf("\n Menu de Opçoes: ");
        printf("\n 1 - Deposito ");
        printf("\n 2 - Saque");
        printf("\n 3 - Saldo");
        printf("\n 4 - Sair");

        printf("\n Digite uma ação: ");
        scanf("%d", &comando);

        switch (comando)
        {
        case 1:
            printf("\n Informe um valor: ");
            scanf("%f", &valor);
            saldo += valor;
            printf("\n Saldo atual: R$: %.2f", saldo);
            break;

        case 2:
            printf("\n Informe um valor: ");
            scanf("%f", &valor);
            saldo -= valor;
            printf("\n Saldo atual: R$: %.2f", saldo);
            break;

        case 3:
            printf("\n Saldo atual: R$: %.2f", saldo);
            break;

        case 4:
            printf("\n Saindo...");
            break;

        default:
            printf("\n Opção inválida.");
            break;
        }

    } while (comando != 4);

    printf("\n Fim das operações.");

    return 0;
}