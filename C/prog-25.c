#include <stdio.h>

int somar(){
    return 2 + 3;
}

int main()
{
    int resultado = 0;
    resultado = somar();
    printf("O resultado da função é = %d", resultado);

    return 0;
}