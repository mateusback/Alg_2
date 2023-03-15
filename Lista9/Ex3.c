#include <stdio.h>

struct DadosAluno{
    char nome[150];
    int idade;
};

int main (void){
    struct DadosAluno alunos[10];

    for(int i = 0; i < 10; i++){
        printf("Informe o nome do aluno: ");
        scanf("%s", &alunos[i].nome);
        printf("Informe a idade deste aluno: ");
        scanf("%d", &alunos[i].idade);
    }
    for(int i = 0; i < 10; i++){
    printf("O aluno %s tem %d anos\n", alunos[i].nome, alunos[i].idade);
    }
    return 0;
}