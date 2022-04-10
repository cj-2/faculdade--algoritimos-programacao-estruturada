#include <stdio.h>

void testar(int *n1, int *n2)
{
    // O * dá acesso ao valor apontado pelo ponteiro.
    *n1 = -1;
    *n2 = -2;
    printf("Valores dentro da função testar(): \n");
    printf("n1 = %d e n2 = %d \n", *n1, *n2);
}

void main()
{
    int n1 = 10, n2 = 20;
    printf("Valores antes da função testar(): \n");
    printf("n1 = %d e n2 = %d \n", n1, n2);

    testar(&n1, &n2);

    printf("Valores depois da função testar(): \n");
    printf("n1 = %d e n2 = %d \n", n1, n2);
}