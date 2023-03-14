#include <stdio.h>

int main(void){
    float salario[19], salarioFinal[19];
    for(int i = 0; i < 20; i++){
        printf("Informe um numero: ");
        scanf("%f", &salario[i]);
    }

    for(int i = 0; i < 20; i++){
        salarioFinal[i] = salario[i] + (salario[i] * 0.08);
        printf("O salario R$ %.2f, passou a ser: R$ %.2f\n\n",salario[i], salarioFinal[i]);
    }
    return 0;
}