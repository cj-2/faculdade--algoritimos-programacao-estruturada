#include <stdio.h>

int ehPrimo(int n)
{
    return ehPrimoAux(n, 2);
}

int ehPrimoAux(int n, int x)
{
    if (n == x)
    {
        return 1;
    }
    else if (n % x == 0)
    {
        return 0;
    }
    else
    {
        return ehPrimoAux(n, x + 1);
    }
}

int main()
{
    int n, resultado;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    resultado = ehPrimo(n);
    if (resultado == 1)
    {

        printf("O número %d é primo. \n", n);
    }
    else
    {
        printf("O número %d não é primo. \n", n);
    }

    return 0;
}