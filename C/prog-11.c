#include <stdio.h>

#define TAMANHO_NOME 20

struct cliente
{
    char nome[TAMANHO_NOME]; // String
    int idade;
};

struct filme
{
    int classificacao;
    int esta_disponivel;
};

int main()
{
    struct cliente cli;
    struct filme fil;

    printf("\n Informe o nome do cliente:");
    fflush(stdin);
    fgets(cli.nome, TAMANHO_NOME, stdin);

    printf("\n Informe a idade do cliente:");
    scanf("%d", &cli.idade);

    printf("\n Informe a classificação do filme:");
    scanf("%d", &fil.classificacao);

    printf("\n Informe \"1\" se o filme estiver disponível ou \"0\" caso contrário:");
    scanf("%d", &fil.esta_disponivel);

    printf("\n");

    printf("\n Cliente: %s", cli.nome);
    printf("\n Idade: %d anos", cli.idade);
    printf("\n Classificação do filme: %d anos", fil.classificacao);
    printf("\n Filme pode ser locado pelo cliente: %d", (fil.esta_disponivel) && (cli.idade >= fil.classificacao));
    printf("\n Anos para locar o filme: %d", (cli.idade < fil.classificacao) * (fil.classificacao - cli.idade));

    return 0;
}