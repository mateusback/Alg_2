#include <stdio.h>

struct Imovel{
    int numCadastro;
    float valorImposto;
    int mesesAtraso;
};

int main (){
    int numAux, mesesAux;
    float impostoAux;
    printf("Informe o numero de cadastro do imovel: ");
    scanf("%d", &numAux);
    printf("Informe o valor do imposto: ");
    scanf("%f", &impostoAux);
    printf("Informe a quantidade de meses atrasados: ");
    scanf("%d", &mesesAux);
    mesesAux = mesesAux * 10;

    struct Imovel imovel = {numAux, impostoAux, mesesAux};

    printf("O imovel de codigo %d, tera que pagar R$ %.2f de impostos",imovel.numCadastro, imovel.valorImposto + imovel.mesesAtraso);

    return 0;
}
