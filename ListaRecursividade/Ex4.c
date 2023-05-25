#include <stdio.h>

int sum(int num);

int main(void){
    int num = 0;
    printf("Informe um numero para somar seus digitos: ");
    scanf("%i", &num);
    printf("O resultado alcancado da soma eh: %i", sum(num));
    
    return 0;
}

int sum(int num){
    int soma = 0;
    if (num == 0) return soma;
    else{
        soma += num % 10 + sum(num / 10);
        return soma;
    }
}
