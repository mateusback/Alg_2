#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
int main(void) {

	int n1,n2, soma;
    printf("Informe um numero: ");
    scanf("%i", &n1);
	printf("Informe outro numero: ");
    scanf("%i", &n2);

	soma = n1 + n2;

	printf("A soma dos dois valores é: %i\n\n", soma);
	return 0;
}