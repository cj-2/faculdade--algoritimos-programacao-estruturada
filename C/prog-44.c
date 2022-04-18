#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

struct No
{
    char info;
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

char desempilhar(struct Pilha *p)
{
    assert(p != NULL);
    assert(p->topo != NULL);

    struct No *aux = p->topo;

    char elemento = aux->info;
    p->topo = aux->proximo;
    p->tamanho--;
    free(aux);

    return elemento;
}

char topo(struct Pilha *p)
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

bool combina(char c1, char c2)
{
    switch (c1)
    {
    case ')':
        return c2 == '(';
    case '}':
        return c2 == '{';
    case ']':
        return c2 == '[';
    default:
        return false;
    }
}

bool validar(char exp[], int tam)
{
    struct Pilha *p = criar();

    for (int i = 0; i < tam; i++)
    {
        char c = exp[i];
        switch (c)
        {
        case '(':
        case '{':
        case '[':
            empilhar(p, c);
            break;
        case ')':
        case '}':
        case ']':
            if (vazia(p) == true)
                return false;
            if (combina(c, desempilhar(p)) == false)
                return false;
        }
    }
    return (vazia(p));
}

int main()
{
    char exp[] = "{([])}";
    printf("Resultado: 1 - Correto, 0 - Incorreto ? %d \n ", validar(exp, 6));

    return 0;
}