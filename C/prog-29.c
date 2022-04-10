#include <stdio.h>
#include <stdlib.h>

float calcularIMC()
{
    float altura = 0, peso = 0;

    printf("Digite o sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    return peso / (altura * altura);
}

int main()
{
    float IMC = calcularIMC();

    if (IMC < 18.5)
    {
        printf("IMC = %.2f, Situação: Abaixo do peso ideal! ;(", IMC);
    }
    else if (IMC < 24.9)
    {
        printf("IMC = %.2f, Situação: No peso ideal! :)", IMC);
    }
    else
    {
        printf("IMC = %.2f, Situação: Acima do peso ideal... ;(", IMC);
    }

    return 0;
}