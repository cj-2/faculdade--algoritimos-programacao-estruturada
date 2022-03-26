#include <stdio.h>

int main()
{
    int acao = 0;

    printf("\n (1) Saldo, (2) Extrato, (3) Saque, (4) Sair");
    printf("\n Escolha um comando: ");
    scanf("%d", &acao);

    switch (acao)
    {
    case 1:
        printf("\n Saldo");
        break;

    case 2:
        printf("\n Extrato");
        break;

    case 3:
        printf("\n Saque");
        break;

    case 4:
        printf("\n Sair");
        break;

    default:
        printf("\n Inválido");
        break;
    }

    return 0;
}