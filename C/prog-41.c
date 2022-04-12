#include <stdio.h>

// Estrutura de Dados: Lista
// Tipo: Lista simplesmente ligada.

// Criando um nó de uma lista.
struct No
{
    int info;
    // Cada nó aponta para o ponteiro de um próximo.
    struct No *proximo;
};

// Criando o struct da Lista
struct Lista
{
    // Cada lista aponta inicialmente para o primeiro nó.
    struct No *inicio;
    int tamanho;
};

struct Lista *criar()
{
    struct Lista *nova_lista = (struct Lista *)malloc(sizeof(struct Lista));

    if (nova_lista != NULL)
    {
        nova_lista->inicio = NULL;
        nova_lista->tamanho = 0;
    }

    return nova_lista;
}

int main()
{

    return 0;
}