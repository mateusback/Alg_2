
#include <stdio.h>

struct Livro{
    char nome[150];
    char editora[50];
    char isbn[13];
    int ano;
    int numPaginas;
    float preco;
};

int main (void){
    struct Livro livros[5];
    float aux = 0;
    for(int i = 0; i < 5; i++){
        printf("Informe o nome do livro: ");
        scanf("%s", &livros[i].nome);
        printf("Informe a editora: ");
        scanf("%s", &livros[i].editora);
        printf("Informe o ISBN: ");
        scanf("%s", &livros[i].isbn);
        printf("Informe o ano de edicao: ");
        scanf("%d", &livros[i].ano);
        printf("Informe o numero de paginas: ");
        scanf("%d", &livros[i].numPaginas);
        printf("Informe o preco: ");
        scanf("%f", &livros[i].preco);
        aux = aux + livros[i].numPaginas;
    }

    printf("A media de paginas dos livros informados eh: %.2f\n", aux/5);
    return 0;
}