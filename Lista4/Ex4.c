#include <stdio.h>

int main() {
	int i;
	float aux, num[5];
	
	for (i = 1; i <= 5; i++) {
		printf("\nPreco: ");
		scanf("%f", &aux);
		aux = (aux * 0.10) + aux;
		num[i] = aux;
	}
	printf("Produtos:\n");
	for(i = 1; i <= 5; i++) {
		printf("R$ %.2f\n", num[i]);

	}
	return 0;
}