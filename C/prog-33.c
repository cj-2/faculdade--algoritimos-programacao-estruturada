#include <stdio.h>

int somar(int a, int b){
    return a + b;      
}

void main()
{
    int result = somar(10, 15);
    printf("O resultado da soma é %d. \n", result);
}