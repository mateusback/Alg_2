#include <stdio.h>

struct Passagem{
    int numero;
    int codigoPartida;
    int codigoChegada;
    int poltrona;
    char assento;
};

int main (void){
    struct Passagem passagem = {123, 312, 231, 22, 'J'};

    printf("Numero da passagem: %d \n", passagem.numero);
    printf("Codigo do local de partida: %d \n", passagem.codigoPartida);
    printf("Codigo do local de chegada: %d \n", passagem.codigoChegada);
    printf("Numero da poltrona: %d \n", passagem.poltrona);

    if(passagem.assento == 'J'){
        printf("Local do Asseento: Janela\n");
    }else{
        printf("Local do Asseento: Corredor\n");
    }

    return 0;
}
