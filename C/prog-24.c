#include <stdio.h>
#include <ctype.h>

#define TAM_NOME 30

int main()
{
    char nome[TAM_NOME];
    printf("Digite o nome do aluno: ");

    fflush(stdin);
    fgets(nome, TAM_NOME, stdin);

    printf("Nome antes do tratamento: %s", nome);

    for (int i = 0; i < TAM_NOME; i++)
    {
        nome[i] = toupper(nome[i]);
    }

    printf("Nome depois do tratamento: %s", nome);

    return 0;
}