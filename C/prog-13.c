#include <stdio.h>

int main()
{
    int numero = 0;

    printf("\n Digite um número inteiro: ");
    scanf("%d", &numero);

    if ((numero % 2) == 0)
    {
        printf("\n Esse número é par!");
    }

    else
    {
        printf("\n Esse número é impar!");
    }

    return 0;
}