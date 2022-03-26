Para saber o endereço de uma variável, utilizamos o **operador &**
no hora de imprimir uma variável.

Atribuindo valor a uma variável em C:

```c
scanf("%d", &x);
```

É possível criar constantes de duas formas em C, que é definindo depois da importação das bibliotecas (fora do main()) utilizando o `#define`:

    #define <nome_da_constante> <valor>
    // Sem ponto e virgula ';'

No exemplo acima, utilizando o `#define`, não será alocado espaço na memória, diferente do exemplo abaixo.

A segunda forma é criar como se cria uma variável, porem passando `const` no início.

    const <tipo> <nome_da_constante>;

Essa segunda forma aloca dados na memória como as variáveis.

Criando vetores unidimensionais heterogênicos

    <tipo> <nome_do_vetor>[tamanho];

Declaração de uma string em C:

    char <nome_da_string>[tamanho];

O tamanho de uma strin ser baseado sempre na quantidade de caractéres + 1. Já que a ultima posição
é utilizada pelo compilador (aciona o valor "\0").

Atribuindo valores em uma string:

    char nome[16] = {'J','o','a','o'}; // Como em um array normal.
    char sobrenome[31] = "Alberto Gomes"; // Aspas duplas.

`%s` é utilizado para indicar uma string.

    printf("\n Nome digitado: %s", nome); // Não há a necessidade de utilizar o '&'.

A função `scanf()` só consegue capturar palavras simples, pois a mesma interrompe a atribuição quando encontra um espaço.
Para contornar isso, utilizamos a `fgets()` da biblioteca `<stdio.h>`.

    // fgets(nome_string,tamanho_string, entrada);
    fflush(stdin); // Limpa a entrada.
    fgets(frase, 101, stdin);

Criação de matriz em C:

    <tipo_dado> <nome_da_matriz>[numero_linhas][numero_colunas];

## Struct (Tipos)

Para criar variaveis com tipos diferentes de dados (estruturas), utilizamos o `struct`, que funcionam como um tipo de dado. Devem ser declarados antes do `main()`.

```c
// dessa forma criamos um tipo com o nome colocado em <nome>
struct <nome>{
    <tipo> <nome_da_variavel1>;
    <tipo> <nome_da_variavel2>;
};
```

## Ponteiros

Variáveis de tipo `ponteiro` são utilziadas exclusivamente para armazenar endereços de memória. Criação:

```c
// <tipo> *<nome_do_ponteiro>;
int *idade; // O tipo do ponteiro indica o tipo de endereço apontado.
```

Outro exemplo:

```c
int ano = 2018;
int *ponteiro_para_ano = &ano; // O '&' aponta para o endeço do inteiro ano.
```

Para imprimir valor de um ponteiro (endereço de memória)

```c
printf("\n Conteúdo do ponteiro: %p", ponteiro_para_ano); // %p imprime o valor contido no ponteiro (endereço hexadecimal).
```

Para acessar o conteúdo da variável que o ponteiro aponta:

```c
printf("\n Conteúdo da variável pelo ponteiro: %d", *ponteiro_para_ano); // É colocado um * na frente do nome do ponteiro.
```

Imprimindo o endereço do ponteiro na memória:

```c
printf("\n Endereco do ponteiro: %p", &ponteiro_para_ano);
```

O nome de um vetor nada mais é do que um ponteiro para o endereço de memória do seu primeiro elemento.
Podemos acessar o `primeiro valor` de um vetor tanto com `num[0]` ou `*num`.


## Operações

Quando fazemos operações boleanas os resultados são em 0 e 1, sendo respectivos, falso e verdadeiro.