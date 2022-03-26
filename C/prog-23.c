#include <stdio.h>

int main()
{
    int linha, coluna;
    const int TAM_MATRIZ = 3;
    int matriz[TAM_MATRIZ][TAM_MATRIZ];

    for (linha = 0; linha < TAM_MATRIZ; linha++)
    {
        for (coluna = 0; coluna < TAM_MATRIZ; coluna++)
        {
            printf("Digite o valor para [linha %d, coluna %d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("Veja sua Matriz:\n");

    for (linha = 0; linha < TAM_MATRIZ; linha++)
    {
        for (coluna = 0; coluna < TAM_MATRIZ; coluna++)
        {
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}