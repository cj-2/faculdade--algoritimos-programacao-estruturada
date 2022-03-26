#include <stdio.h>

int main()
{
    float soma_das_notas, nota_atual, media_das_notas;
    int numero_alunos = 0, comando;

    do
    {
        numero_alunos++;

        printf("Forneça a nota do aluno %d: ", numero_alunos);
        scanf("%f", &nota_atual);
        soma_das_notas += nota_atual;

        printf("Digite (1) para continuar ou (2) para sair finalziar: ");
        scanf("%d", &comando);

    } while (comando != 2);

    media_das_notas = soma_das_notas / (float)numero_alunos;
    printf("\n Média das notas dos alunos: %.2f", media_das_notas);

    return 0;
}