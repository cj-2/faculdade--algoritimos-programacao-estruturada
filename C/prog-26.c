#include <stdio.h>

float calcular(){
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);
    return num * num;
}

int main()
{
    float resultado = 0;
    resultado = calcular();
    printf("O quadrado do número digitado é = %f", resultado);

    return 0;
}