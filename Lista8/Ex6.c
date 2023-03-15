#include <stdio.h>

struct Internet{
    char nomeCliente[100];
    char emailCliente[75];
    int plano;
    float valorMensalidade;
    char situacao;
};

int main (void){
    struct Internet internet;

    printf("Informe o nome do cliente: ");
    scanf("%s", &internet.nomeCliente);
    printf("Informe o email do cliente: ");
    scanf("%s", &internet.emailCliente);
    printf("Informe o plano do cliente: \n(1 eh ilimitado; 2 eh 20 horas/mes; 3 eh 10 horas/mes)\n");
    scanf("%d", &internet.plano);
    printf("Informe o valor da mensalidade: ");
    scanf("%f", &internet.valorMensalidade);
    printf("Informe a situacao: (A eh Ativo ou I eh Inativo)\n");
    scanf("%s", &internet.situacao);

    printf("Nome do Cliente: %s \n", internet.nomeCliente);
    printf("Email do Cliente: %s \n", internet.emailCliente);
    if(internet.plano == 1){
        printf("Plano: Ilimitado\n");
	}else if(internet.plano == 2){
        printf("Plano: 20 horas/mes\n");
    }else{
        printf("Plano: 10 horas/mes\n");
    }
    printf("Valor da mensalidade do Cliente: %.2f \n", internet.valorMensalidade);
    if(internet.situacao == 'A'){
        printf("Situacao: Ativo");
    }else{
        printf("Situacao: Inativo");
    }
    return 0;
}
