#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan

int main (void) {
	float div, n1, n2 = 0;
	
	printf ("Digite o Primeiro Valor: ");
	scanf("%f", n1);

	while (n2 == 0){
		printf("Digite o Segundo valor: ");
		scanf("%f", n2);
		if (n2 == 0){
			printf("Valor invalido\n");
		}
	} 
	
	div = n1/n2;
	printf("%.2f", div);
	
	return 0;
}