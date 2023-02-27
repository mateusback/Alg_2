#include <stdio.h>

int main (void) {
	float media, n1, n2;
	
	do {
	
	printf("Nota da primeira avaliacao: ");
	scanf("%f", n1);
	
	if( n1 > 10 ||  n1 < 0){
		printf("Nota invalida\n");
	}
	
	} while (n1 > 10 || n1 < 0);
	
	do {
	printf("Nota da segunda avaliacao: ");
	scanf("%f", n2);
	
	if(n2 > 10 || n2 < 0){
		printf("Nota invalida\n");
	}
	
	} while (n2 > 10 || n2 < 0);
	
	media = (n1 + n2) / 2;
	printf("%.2f", media);

	return 0;
}