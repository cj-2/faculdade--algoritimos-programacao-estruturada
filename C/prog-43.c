#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

// Pilha simplesmente ligada

struct No
{
    int info;
    struct No *proximo;
};

struct Pilha
{
    int tamanho;
    struct No *topo;
};

struct Pilha *criar()
{
    struct Pilha *nova_pilha = (struct Pilha *)malloc(sizeof(struct Pilha));

    if (nova_pilha != NULL)
    {
        nova_pilha->topo = NULL;
        nova_pilha->tamanho = 0;
    }

    return nova_pilha;
}

void empilhar(struct Pilha *p, int item)
{
    assert(p != NULL);
    struct No *novo_no = (struct No *)malloc(sizeof(struct No));

    if (novo_no != NULL)
    {
        novo_no->info = item;
        novo_no->proximo = p->topo;
        p->topo = novo_no;
        p->tamanho++;
    }
}

int desempilhar(struct Pilha *p)
{
    assert(p != NULL);
    assert(p->topo != NULL);

    struct No *aux = p->topo;

    int elemento = aux->info;
    p->topo = aux->proximo;
    p->tamanho--;
    free(aux);

    return elemento;
}

int topo(struct Pilha *p)
{
    assert(p != NULL);
    assert(p->topo != NULL);
    struct No *topo = p->topo;
    return topo->info;
}

int tamanho(struct Pilha *p)
{
    assert(p != NULL);
    return p->tamanho;
}

bool vazia(struct Pilha *p)
{
    assert(p != NULL);
    return (p->topo == NULL);
}

void liberar(struct Pilha *p)
{
    assert(p != NULL);

    while (vazia(p) == false)
    {
        desempilhar(p);
    }

    free(p);
}

int main()
{
    struct Pilha *minha_pilha = criar();

    printf("Essa pilha está vazia? 1 - SIM, 0 - NÃO ? %d \n", vazia(minha_pilha));

    printf("Empilhando... \n");

    empilhar(minha_pilha, 1);
    empilhar(minha_pilha, 2);
    empilhar(minha_pilha, 3);

    printf("Essa pilha está vazia? 1 - SIM, 0 - NÃO ? %d \n", vazia(minha_pilha));

    printf("Desempilhando elemementos: \n");
    printf("%d ", desempilhar(minha_pilha));
    printf("%d ", desempilhar(minha_pilha));
    printf("%d ", desempilhar(minha_pilha));

    printf("\n");

    liberar(minha_pilha);

    return 0;
}