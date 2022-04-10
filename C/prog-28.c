#include <stdio.h>
#include <stdlib.h>

int *alocar()
{
    int *memoria = (int *)malloc(sizeof(int));
    return memoria;
}

int main()
{
    int *num = alocar();

    if (num != NULL)
    {
        printf("Informe um número inteiro: ");
        scanf("%d", num); // No caso de ponteiro não necessita &.
        printf("Número informado: %d", *num);
    }

    return 0;
}