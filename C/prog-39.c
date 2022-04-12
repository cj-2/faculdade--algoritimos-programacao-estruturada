#include <stdio.h>

int fatorialCauda(int n)
{
    return fatorialAux(n, 1);
}

int fatorialAux(int valor, int parcial)
{
    if (valor == 1)
    {
        return parcial;
    }
    else
        return fatorialAux(valor - 1, parcial * valor);
    {
    }
}

int main()
{
    int n, resultado;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    resultado = fatorialCauda(n);
    printf("Resultado: %d\n", resultado);

    return 0;
}