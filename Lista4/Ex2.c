#include <stdio.h>

//. Armazenar 15 números inteiros em um vetor NUM e imprimir os números fornecidos dizendo se  eles são par ou impar.
int main() {
	int num[15], aux, i;
	
	for (i = 0; i < 15; i++) {
		num[i] = i;
	}
	
	for(i = 0; i < 15; i++) {
		printf("%d", num[i]);
		if (num[i] % 2 == 0) {
			printf(" eh Par\n");
			
		}else {
			printf(" eh impar\n");			
		}
	}
	return 0;
}