#include <stdio.h>

struct DadosAluno{
    char nome[150];
    int idade;
};

int main (void){
    struct DadosAluno aluno;

    printf("Informe o nome do aluno: ");
    scanf("%s", &aluno.nome);
    printf("Informe a idade deste aluno: ");
    scanf("%d", &aluno.idade);

    printf("O aluno %s tem %d anos", aluno.nome, aluno.idade);
    return 0;
}