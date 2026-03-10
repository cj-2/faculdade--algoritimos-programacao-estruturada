# Resumo rápido dos programas C

Este diretório contém uma coleção de programas em C (prog-1.c até prog-45.c) usados para praticar conceitos fundamentais de programação estruturada.

## 🔍 Como usar este resumo
- Cada programa tem um foco didático diferente.
- Abaixo você encontra os conceitos principais abordados e referências a quais arquivos implementam cada um.
- Use este guia para revisar rapidamente cada tema ou para identificar qual arquivo abrir primeiro.

---

## 🧠 Tipos básicos & declarações
- Tipos primitivos: `int`, `float`, `double`, `char`, `bool` (via `<stdbool.h>`).
- Declaração de variáveis e inicialização.

**Arquivos:**
- `prog-1.c` (tipos básicos, bool)
- `prog-2.c` (impressão com `printf`)
- `prog-5.c` (`#define` e `const`)

---

## 🖨 Entrada e saída (I/O)
- `printf`, `scanf` e `fgets`.
- Uso de `fflush(stdin)` para limpar buffer antes de `fgets`.

**Arquivos:**
- `prog-2.c`, `prog-3.c`, `prog-8.c`, `prog-11.c`, `prog-12.c`, `prog-13.c`, `prog-18.c`, `prog-19.c`

---

## 🧮 Operadores e expressões
- Operadores aritméticos e atribuição.
- Uso de operadores `%` (resto) e prioridade de operadores.

**Arquivos:**
- `prog-9.c` (soma)
- `prog-13.c` (paridade com `%`)

---

## 🧭 Lógica condicional
- `if` / `else` / `else if` para tomadas de decisão.
- Uso de `switch` / `case` / `default`.

**Arquivos:**
- `prog-12.c`, `prog-13.c`, `prog-15.c`, `prog-29.c` (condicionais e faixas)
- `prog-14.c`, `prog-18.c`, `prog-44.c` (switch-case)

---

## 🔁 Estruturas de repetição
- `while`, `do...while`, `for`.
- Uso de `continue`.

**Arquivos:**
- `prog-16.c` (`while`)
- `prog-17.c`, `prog-18.c`, `prog-19.c` (`do...while`)
- `prog-20.c`, `prog-21.c`, `prog-22.c`, `prog-23.c`, `prog-24.c`, `prog-27.c` (`for`)

---

## 🧱 Vetores e matrizes
- Vetores unidimensionais (arrays).
- Matrizes bidimensionais.

**Arquivos:**
- `prog-6.c` (vetor simples)
- `prog-21.c` (leitura e escrita de vetor com loop)
- `prog-23.c` (matriz 2D)

---

## 🧬 Strings e manipulação de caracteres
- Strings em C como vetor de `char`.
- Tratamento de texto (toupper e `ctype.h`).

**Arquivos:**
- `prog-7.c` (struct com string)
- `prog-8.c` (leitura de string + `fgets`)
- `prog-24.c` (uso de `toupper` para normalizar texto)

---

## 🧱 Structs (tipos compostos)
- Definição de `struct` e uso de campos.

**Arquivos:**
- `prog-7.c` (struct simples)
- `prog-8.c` (struct cliente)
- `prog-11.c` (struct cliente + struct filme)

---

## 🔗 Ponteiros & memória dinâmica
- Endereços com `&`, leitura de endereço.
- Ponteiros (`*`), dereferência.
- `malloc` / `free` e checagem de `NULL`.

**Arquivos:**
- `prog-4.c` (endereço de variáveis)
- `prog-28.c` (alocação dinâmica com `malloc`)
- `prog-34.c` (ponteiros em parâmetros de função)
- `prog-35.c` (passagem de arrays para funções)
- `prog-27.c` (array estático retornado de função)

---

## 🧩 Funções (modularização)
- Funções sem parâmetros, com retorno, com parâmetros.
- Passagem por valor vs passagem por referência.

**Arquivos:**
- `prog-25.c`, `prog-26.c` (funções simples)
- `prog-33.c` (função com parâmetros)
- `prog-34.c` (passagem por referência via ponteiro)
- `prog-35.c`, `prog-36.c` (funções que recebem arrays)

---

## 🔁 Recursão
- Funções que se chamam de forma recursiva.
- Critério de parada (caso base).
- Recursão de cauda.

**Arquivos:**
- `prog-37.c` (somatória recursiva)
- `prog-38.c` (fatorial recursivo)
- `prog-39.c` (fatorial com recursão de cauda)
- `prog-40.c` (verificação de primo recursiva)

---

## 🌐 Variáveis globais & escopo
- Diferença entre variáveis globais e locais.
- Uso de `extern` para acessar variáveis globais.

**Arquivos:**
- `prog-30.c`, `prog-31.c`, `prog-32.c`

---

## 🧠 Estruturas de dados (Listas / Pilhas / Filas)
- Listas simplesmente ligadas (`prog-41.c`).
- Listas duplamente ligadas (`prog-42.c`).
- Pilha usando lista ligada (`prog-43.c` e `prog-44.c`).
- Fila usando lista ligada (`prog-45.c`).

---

## 📚 Bibliotecas usadas
- `<stdio.h>` – I/O básico (`printf`, `scanf`, `fgets`)
- `<stdlib.h>` – `malloc`, `free`, `rand`
- `<stdbool.h>` – tipo `bool`, `true`/`false`
- `<ctype.h>` – manipulação de caracteres (`toupper`)
- `<assert.h>` – validação de pré-condições (`assert`)

---

## ✅ Dica rápida para revisão
Se quiser revisar conceitos de forma prática, abra o arquivo correspondente ao tópico e execute com:

```powershell
gcc prog-XX.c -o prog-XX.exe
./prog-XX.exe
```

Substitua `XX` pelo número do programa.

---

Se preferir, posso gerar um sumário por área (ex.: só estruturas de dados, só ponteiros, etc.) ou sugerir uma sequência de estudos.
