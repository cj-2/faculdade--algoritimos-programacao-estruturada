#include <stdio.h>

int main()
{
    float nota;
    do
    {
        printf("Qual a nota do aluno? min: 0; max 10: ");
        scanf("%f", &nota);

    } while (nota < 0 || nota > 10);

    return 0;
}