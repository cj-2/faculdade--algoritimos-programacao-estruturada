#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

// Exemplo de lista duplamente ligada.

struct No
{
    int info;
    struct No *anterior;
    struct No *proximo;
};

struct ListaDupla
{
    int tamanho;
    struct No *inicio;
    struct No *fim;
};

struct ListaDupla *criar()
{
    struct ListaDupla *nova_lista = (struct ListaDupla *)malloc(sizeof(struct ListaDupla));

    if (nova_lista != NULL)
    {
        nova_lista->inicio = NULL;
        nova_lista->fim = NULL; // Adicionado o fim.
        nova_lista->tamanho = 0;
    }

    return nova_lista;
}

bool vazia(struct ListaDupla *li)
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

void inserir(struct ListaDupla *li, int pos, int item)
{
    assert(li != NULL);
    assert(pos >= 0 && pos <= li->tamanho);

    struct No *novo_no = (struct No *)malloc(sizeof(struct No));

    novo_no->info = item;

    if (pos == 0)
    {
        novo_no->anterior = NULL;
        novo_no->proximo = li->inicio;
        li->inicio = novo_no;

        // Caso tenha apenas um item na lista, o início e o fim serão os mesmos.
        if (li->fim == NULL)
        {
            li->fim = novo_no;
        }
    }

    // Caso seja seja requisitado que seja inserido na posição do tamanho da lista.
    else if (pos == li->tamanho)
    {
        novo_no->anterior = li->fim;
        novo_no->proximo = NULL;
        li->fim->proximo = novo_no;
        li->fim = novo_no;
    }

    else
    {
        struct No *aux = li->inicio;
        for (int i = 0; i < pos - 1; i++)
        {
            aux = aux->proximo;
        }
        novo_no->anterior = aux; // O anterior é o que cai no loop de cima.
        novo_no->proximo = aux->proximo;
        aux->proximo = novo_no;
    }
    li->tamanho++;
}

int remover(struct ListaDupla *li, int pos)
{
    assert(li != NULL);
    assert(vazia(li) == false);
    assert(pos >= 0 && pos < li->tamanho);

    struct No *aux = NULL;

    if (pos == 0)
    {
        aux = li->inicio;
        li->inicio = aux->proximo;
        if (li->inicio == NULL)
        {
            li->fim == NULL;
        }
        else
        {
            li->inicio->anterior = NULL;
        }
    }
    else if (pos == li->tamanho - 1)
    {
        aux = li->fim;
        li->fim = aux->anterior;
        li->fim->proximo = NULL;
    }
    else
    {
        struct No *ant = NULL;
        aux = li->inicio;

        for (int i = 0; i < pos; i++)
        {
            ant = aux;
            aux = aux->proximo;
        }

        ant->proximo = aux->proximo;
        aux->proximo->anterior = ant;
    }

    int elemento = aux->info;
    li->tamanho--;
    free(aux); // Limpando o endereço da memória.

    return elemento;
}

int obter(struct ListaDupla *li, int pos)
{
    assert(li != NULL);
    assert(pos >= 0 && pos < li->tamanho);
    struct No *aux;

    if (pos == 0)
    {
        aux = li->inicio;
    }

    else if (pos = li->tamanho - 1)
    {
        aux = li->fim;
    }

    else
    {
        aux = li->inicio;
        for (int i = 0; i < pos; i++)
        {
            aux = aux->proximo;
        }
    }

    return aux->info;
}

int tamanho(struct ListaDupla *li)
{
    assert(li != NULL);
    return li->tamanho;
}

void liberar(struct ListaDupla *li)
{
    while (vazia(li) == false)
    {
        remover(li, 0);
    }

    free(li);
}

void imprimir(struct ListaDupla *li)
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

int main()
{
    // Utilizando as mesma sequencia da lista na lista duplamente ligada.
    struct ListaDupla *minha_lista = criar();

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