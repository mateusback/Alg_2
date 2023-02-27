#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
int main(void) {

	float c2,b2, hipo;
    printf("Informe o cateto maior: ");
    scanf("%f", &b2);
	printf("Informe o cateto oposto menor: ");
    scanf("%f", &c2);

	hipo = sqrt(b2 + c2);

	printf("A hipotenusa do triangulo é: %.2f\n\n", hipo);
	return 0;
}