#include <stdio.h>

float t1, t2;

float calcularMedia()
{
    return (t1 + t2) / 2;
}

void main()
{
    printf("Digite duas temperaturas: ");
    scanf("%f %f", &t1, &t2);
    printf("A média das temperaturas é %.2f \n", calcularMedia());
}