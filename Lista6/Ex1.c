#include <stdio.h>

int main(void){
    int numero[9];
    for(int i = 0; i < 10; i++){
        printf("Informe um numero: ");
        scanf("%d", &numero[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("O %do informado foi: %d\n", i+1, numero[i]);
    }
    return 0;
}