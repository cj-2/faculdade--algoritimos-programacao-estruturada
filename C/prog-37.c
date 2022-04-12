#include <stdio.h>
// Função recursiva somatória.

int somar(int valor)
{
    // Critério de parada;
    if (valor == 0)
    { // Quando chegar nesse caso.
        return valor;
    }
    else
    {
        // Recursão
        return valor + somar(valor - 1); // Retornará na operação que a chamou.
    }
}

int main()
{
    int n, resultado;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    resultado = somar(n);
    printf("Resultado: %d\n", resultado);

    return 0;
}