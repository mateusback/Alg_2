#include <stdio.h>
#include <string.h>

struct Automovel{
    char fabricante[20];
    char modelo[20];
    int ano;
    char placa[8];
    char cor[20];
    char combustivel;
    float preco;
    float valorIPVA;
};

int main(void){
    struct Automovel carro = {"Audi", "Q3", 2018, "MZX7725", "Preto", 'G', 158506.00, 3739.12};
        printf("Fabricante: %s \n", carro.fabricante);
        printf("Modelo: %s \n", carro.modelo);
        printf("Ano: %d \n", carro.ano);
        printf("Placa: %s \n", carro.placa);
        printf("Cor: %s \n", carro.cor);
        printf("Combustivel: %c \n", carro.combustivel);
        printf("Preco: R$ %.2f \n", carro.preco);
        printf("Valor do IPVA: R$ %.2f \n", carro.valorIPVA);
    return 0;
}