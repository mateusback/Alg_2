#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
int main(void) {

	int n1,n2;
	float m;
    printf("Informe um numero: ");
    scanf("%i", &n1);
	printf("Informe outro numero: ");
    scanf("%i", &n2);

	m = (n1 + n2) / 2;

	printf("A media entre dois valores é: %.2f\n\n", m);
	return 0;
}