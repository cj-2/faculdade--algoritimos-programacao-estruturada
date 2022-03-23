#include <stdio.h>

#define PI 3.14 // Sem alocação de memória.

int main()
{
    const float G = 9.80;

    printf("\n PI = %f", PI);
    printf("\n G = %f", G);

    return 0;
}