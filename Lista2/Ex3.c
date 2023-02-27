#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
#include <math.h>
int main(void) {

	float hipo, c,b;
    printf("Informe o cateto maior: ");
    scanf("%f", &b);
		printf("Informe o cateto oposto menor: ");
    scanf("%f", &c);
		float soma = b * b + c * c;
		hipo = sqrt(soma);

	printf("A hipotenusa do triangulo é: %f\n\n", hipo);
	return 0;
}