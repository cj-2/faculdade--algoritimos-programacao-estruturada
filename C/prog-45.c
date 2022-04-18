#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

// Fila ligada

struct No
{
    int info;
    struct No *proximo;
};

struct Fila
{
    int tamanho;
    struct No *inicio;
    struct No *fim;
};

struct Fila *criar()
{
    struct Fila *nova_fila = (struct Fila *)malloc(sizeof(struct Fila));

    if (nova_fila != NULL)
    {
        nova_fila->inicio = NULL;
        nova_fila->fim = NULL;
        nova_fila->tamanho = 0;
    }

    return nova_fila;
}

void enfilerar(struct Fila *f, int item)
{
    assert(f != NULL);
    struct No *novo_no = (struct No *)malloc(sizeof(struct No));

    if (novo_no != NULL)
    {
        novo_no->info = item;
        novo_no->proximo = NULL;
    }
    if (f->fim != NULL)
        f->fim->proximo = novo_no;
    else
        f->inicio = novo_no;

    f->fim = novo_no;
    f->tamanho++;
}

int desenfilerar(struct Fila *f)
{
    assert(f != NULL);
    assert(f->inicio != NULL);

    struct No *aux = f->inicio;

    int elemento = aux->info;
    f->inicio = aux->proximo;

    // se o inicio é vazio, também não há fim.
    if (f->inicio == NULL)
        f->fim = NULL;

    f->tamanho--;
    free(aux);

    return elemento;
}

int inicio(struct Fila *f)
{
    assert(f != NULL);
    assert(f->inicio != NULL);
    return f->inicio->info;
}

int tamanho(struct Fila *f)
{
    assert(f != NULL);
    return f->tamanho;
}

bool vazia(struct Fila *f)
{
    assert(f != NULL);
    return (f->inicio == NULL);
}

void liberar(struct Fila *f)
{
    assert(f != NULL);
    while (f->inicio != NULL)
    {
        desenfilerar(f);
    }
    free(f);
}

int main()
{
    struct Fila *minha_fila = criar();

    enfilerar(minha_fila, 1);
    enfilerar(minha_fila, 2);
    enfilerar(minha_fila, 3);

    printf("Tamanho: %d \n", tamanho(minha_fila));

    printf("Minha fila: [ ");

    printf("%d ", desenfilerar(minha_fila));
    printf("%d ", desenfilerar(minha_fila));
    printf("%d ", desenfilerar(minha_fila));

    printf("] \n");

    printf("Essa pilha está vazia? 1 - SIM, 0 - NÃO ? %d \n", vazia(minha_fila));

    liberar(minha_fila);
    return 0;
}