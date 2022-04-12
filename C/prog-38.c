#include <stdio.h>

int fatorial(int valor)
{
    if (valor == 1)
    {
        return valor;
    }
    else
    {
        return valor * fatorial(valor - 1);
    }
}

int main()
{
    int n, resultado;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    resultado = fatorial(n);
    printf("Resultado: %d\n", resultado);

    return 0;
}