#include <stdio.h>

struct Cliente{
    char nome[100];
    int codigoAgencia;
    char dataNascimento[10];
    float saldo;
    char situacao;
};

int main (){
    struct Cliente cliente[2] = {
        {"Fulano", 1234, "03/04/1997", 20.00, 'V'},
        {"Ciclano", 4321, "31/10/2003", 3123.20, 'N'}
    };
    
    for (int i = 0; i < 2; i++){
        printf("Cliente %d\n", i);
        printf("Nome: %s \n", cliente[i].nome);
        printf("Codigo da agencia: %d \n", cliente[i].codigoAgencia);
        printf("Data de nascimento: %s \n", cliente[i].dataNascimento);
        printf("Saldo: %.2f \n", cliente[i].saldo);
        if(cliente[i].situacao == 'V'){
            printf("Situacao: VIP\n\n");
        }else{
            printf("Situacao: Normal\n\n");
        }
        
    }

    return 0;
}
