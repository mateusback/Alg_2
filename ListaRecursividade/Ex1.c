#include <stdio.h>

int sum(int num);

int main(void){
	int num = 0;
	printf("Informe o numero inteiro para que seja realizada a somatoria dos numeros anteriores: ");
	scanf("%i", &num);
	printf("O resultado da soma eh: %i", sum(num));
	return 0;
}

int sum(int num){
	int soma=0;
	if(num==0) return soma;
	else{ 
		soma = num + sum(num-1);
		return soma;
	}
}
