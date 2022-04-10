#include <stdio.h>

int *gerarRandomArray()
{
    static int r[10];
    for (int a = 0; a < 10; a++)
    {
        r[a] = rand() % 100;
        printf("\n r[%d] = %d", a, r[a]);
    }
    return r; // Retorna o endereço do array.
}

int main()
{
    int *p = gerarRandomArray();

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\n p[%d] = %d", i, p[i]);
    }

    return 0;
}