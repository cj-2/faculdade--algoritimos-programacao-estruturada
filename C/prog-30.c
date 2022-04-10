#include <stdio.h>

// Variáveis globais devem ser decalaradas fora do main() e funções.
int x = 10;

void testar()
{
    x = 2 * x;
}

void main()
{
    printf("Valor de x global = %d \n", x);
    testar();
    printf("Novo valor de x global = %d \n", x);
}