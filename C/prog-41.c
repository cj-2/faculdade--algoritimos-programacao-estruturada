#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

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

bool vazia(struct Lista *li)
{
    assert(li != NULL); // será interrompido o progama caso retorne falso.

    if (li->inicio == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void inserir(struct Lista *li, int pos, int item)
{
    assert(li != NULL);                     // Verifica se é uma lista válida.
    assert(pos >= 0 && pos <= li->tamanho); // Verifica se é uma posição válida e está no limite do tamanho.

    // Alocando memória do nó que será inserido.
    struct No *novo_no = (struct No *)malloc(sizeof(struct No));

    novo_no->info = item;

    if (pos == 0)
    {
        // Caso seja esteja na posição 0, será buscado na lista o primeiro nó, e esse será
        // colocado como próximo no nosso novo nó.
        novo_no->proximo = li->inicio;
        // Depois é alterado na lista o nó inicial pelo criado.
        li->inicio = novo_no;
    }
    else
    {
        // É criado um ponteiro auxiliar apontando para o endereço do primeiro nó da lista.
        struct No *aux = li->inicio;

        // Depois é feito um for para cair no item da posição indicada - 1.
        for (int i = 0; i < pos - 1; i++)
        {
            // O endereço sempre é sobrescito para ser salvo o nó.
            aux = aux->proximo;
        }
        novo_no->proximo = aux->proximo; // Setado o proximo do novo nó
        aux->proximo = novo_no;          // O proximo do auxiliar, que ainda temos na memoria (no caso o anterior ao novo) recebe o novo nó como próximo.
    }
    li->tamanho++;
}

void imprimir(struct Lista *li)
{
    assert(li != NULL);
    printf("Lista: \n");

    struct No *aux = li->inicio;

    for (int i = 0; i < li->tamanho; i++)
    {
        printf("%d\t", aux->info);
        aux = aux->proximo;
    }
}

int tamanho(struct Lista *li)
{
    assert(li != NULL);
    return li->tamanho;
}

int obter(struct Lista *li, int pos)
{
    assert(li != NULL);
    assert(pos >= 0 && pos < li->tamanho);

    struct No *aux = li->inicio;

    for (int i = 0; i < pos; i++)
    {
        aux = aux->proximo;
    }

    return aux->info;
}

int remover(struct Lista *li, int pos)
{
    assert(li != NULL);
    assert(pos >= 0 && pos < li->tamanho);

    struct No *ant = NULL;
    struct No *aux = li->inicio;

    for (int i = 0; i < pos; i++)
    {
        ant = aux;
        aux = aux->proximo;
    }

    // Caso seja o primeiro
    if (ant == NULL)
    {
        li->inicio = aux->proximo;
    }
    else
    {
        // Caso seja qualquer outro, o nó anterior recebe o proximo do que vai ser removido.
        ant->proximo = aux->proximo;
    }

    int elemento = aux->info;
    li->tamanho--;
    free(aux); // Limpando o endereço da memória.

    return elemento;
}

void liberar(struct Lista *li)
{
    while (vazia(li) == false)
    {
        remover(li, 0);
    }

    free(li);
}

int main()
{
    struct Lista *minha_lista = criar();

    if (vazia(minha_lista) == true)
    {
        printf("Lista novinha criada! \n");
    }
    else
    {
        printf("Algo deu errado... \n");
    }

    printf("Inserindo valores... \n");

    inserir(minha_lista, 0, 5);
    inserir(minha_lista, 0, 3);
    inserir(minha_lista, 2, 6);
    inserir(minha_lista, 3, 7);

    printf("Tamanho: %d\n", tamanho(minha_lista));

    imprimir(minha_lista);

    printf("\n");
    printf("Removendo... \n");

    remover(minha_lista, 0);

    printf("Tamanho: %d\n", tamanho(minha_lista));
    imprimir(minha_lista);

    printf("\n");

    return 0;
}