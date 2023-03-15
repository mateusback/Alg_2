#include <stdio.h>

struct Tecido{
    int codigo;
    char descricao[200];
    float precoMetro;
    int quantidadeEstoque;
};

int main (void){
    struct Tecido tecido[30];

    for(int i = 0; i < 30; i++){
        printf("Informe o codigo do tecido: ");
        scanf("%d", &tecido[i].codigo);
        printf("Informe a descricao do tecido: ");
        scanf("%s", &tecido[i].descricao);
        printf("Informe o preco do tecido: ");
        scanf("%f", &tecido[i].precoMetro);
        printf("Informe a quantidade em estoque: ");
        scanf("%d", &tecido[i].quantidadeEstoque);
    }

    printf("Tecidos do lote 1: \n");
    for (int i = 0; i < 30; i++){
        printf("Codigo: %d \n", tecido[i].codigo);
        printf("Descricao: %s \n", tecido[i].descricao);
        printf("Preco por metro: %.2f \n", tecido[i].precoMetro);
        printf("Quantidade em estoque: %d \n\n", tecido[i].quantidadeEstoque);
    }
    
        printf("Tecidos com estoque inferior a 50m: \n");
    for (int i = 0; i < 30; i++){
    	if(tecido[i].quantidadeEstoque < 50){
        printf("Codigo: %d \n", tecido[i].codigo);
        printf("Descricao: %s \n", tecido[i].descricao);
        printf("Preco por metro: %.2f \n", tecido[i].precoMetro);
        printf("Quantidade em estoque: %d \n\n", tecido[i].quantidadeEstoque);
        }
    }
    
    printf("Tecidos com preco inferior a R$ 0.60: \n");
    for (int i = 0; i < 30; i++){
    	if(tecido[i].precoMetro < 0.60){
        printf("Codigo: %d \n", tecido[i].codigo);
        printf("Descricao: %s \n", tecido[i].descricao);
        printf("Preco por metro: %.2f \n", tecido[i].precoMetro);
        printf("Quantidade em estoque: %d \n\n", tecido[i].quantidadeEstoque);
        }
    }

    return 0;
}