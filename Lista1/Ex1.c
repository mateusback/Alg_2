#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
int main(void) {

	float diametro, raio, area, circun, pi = 3.141592;

    printf("O raio: ");
    scanf("%f", &raio);
	diametro = 2 * raio;
	area = pi * raio;
	circun = 2 * pi * raio;

	printf("Diametro: %.2f\n\n", diametro);
	printf("Area: %.2f\n\n", area);
	printf("Circunferencia: %.2f\n\n", circun);
    return 0;
}