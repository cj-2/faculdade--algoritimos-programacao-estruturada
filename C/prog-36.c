#include <stdio.h>

#define VET_TAM 6

float calcularMedia(float conjunto[], int tam)
{
    float soma = 0;
    for (int i = 0; i < tam; i++)
    {
        soma += conjunto[i];
    }
    return soma / (float)tam;
}

float calcularMediana(float conjunto[], int tam)
{
    float result = 0.0;

    if (tam % 2 == 0)
    {
        result = (conjunto[tam / 2] + conjunto[(tam / 2) - 1]) / 2;
    }
    else
    {
        result = conjunto[(tam / 2)];
    }

    return result;
}

int main()
{
    float conjunto[VET_TAM] = {1, 2, 3, 4, 5, 6};
    float media, mediana;

    media = calcularMedia(conjunto, VET_TAM);
    mediana = calcularMediana(conjunto, VET_TAM);

    printf("Media: %.2f \n", media);
    printf("Mediana: %.2f \n", mediana);

    return 0;
}