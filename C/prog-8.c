#include <stdio.h>

#define TAMANHO_NOME 20

struct cliente
{
    char nome[TAMANHO_NOME]; // String
    int idade;
};

int main()
{
    struct cliente novo_cliente;
    int classificacao_filme = 0;

    printf("\n Informe o nome do cliente:");
    fflush(stdin);
    fgets(novo_cliente.nome, TAMANHO_NOME, stdin);

    printf("\n Informe a idade do cliente:");
    scanf("%d", &novo_cliente.idade);

    printf("\n Informe a classificação do filme:");
    scanf("%d", &classificacao_filme);

    printf("\n Cliente: %s", novo_cliente.nome);
    printf("\n Idade: %d anos", novo_cliente.idade);
    printf("\n Classificação do filme: %d anos", classificacao_filme);

    return 0;
}