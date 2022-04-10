#include <stdio.h>

// Ao passar um array por parâmetro o comportamento é como de se passar
// um ponteiro, mas sem a necessidade do *. 
void inserir(int a[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%d", &a[i]);
    }
}

void imprimir(int b[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Número [%d] = %d \n", i, 2 * b[i]);
    }
}

void main()
{
    int numeros[3];
    printf("Preencha os valores... \n");
    inserir(numeros);
    printf("Dobro dos valores: \n");
    imprimir(numeros);
}