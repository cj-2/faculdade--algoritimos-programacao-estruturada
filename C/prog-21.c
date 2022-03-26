#include <stdio.h>

#define TAM_VETOR 5

int main()
{
    int vetor[TAM_VETOR];

    for (int i = 0; i < TAM_VETOR; i++)
    {
        printf("Entre com um número: ");
        scanf("%d", &vetor[i]);
        printf("Valor digitado: %d \n", vetor[i]);
    }

    return 0;
}