#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
int main(void) {

	int c;
	float f;
    printf("Informe a temperatura em Celsius: ");
    scanf("%i", &c);

	f = 32 + 1.8 * c;

	printf("Temperatura em Fahrenheit: %.2f\n\n", f);
	return 0;
}