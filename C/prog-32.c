#include <stdio.h>

int x = 10;

void main()
{
    int x = -1;
    int b;
    {
        // Abrindo escopo junto com extern, conseguimos acessar a variavel global x;
        extern int x;
        b = x;
    }

    printf("O valor de x = %d \n", x);
    printf("O valor de b (x global) = %d \n", b);
}