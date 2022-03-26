#include <stdio.h>

int main()
{
    int idade = 0;

    printf("\n Digite sua idade:");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("\n Você pode dirigir!");
    }

    else
    {
        printf("\n Você não pode dirigir...");
    }

    return 0;
}