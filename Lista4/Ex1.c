#include <stdio.h>

int main (void){
	int num1[5], num2[5], soma[5], i;

	for (i = 0; i<5; i++){
		printf("Informe o valor do primeiro vetor:");
		scanf("%d", &num1[i]);
		printf("Informe o valor do segundo vetor:");
		scanf("%d", &num2[i]);
	
	}
	for (i = 0; i<5; i++){
		soma[i] = num1[i] + num2[i];
		printf("Soma do vetor: %d\n\n", soma[i]);
	}
	return 0;
}