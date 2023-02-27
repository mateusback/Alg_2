#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan

int main(void) {
	float dma,dme, area;
    printf("Informe a diagonal maior: ");
    scanf("%f", &dma);
	printf("Informe a diagonal menor: ");
    scanf("%f", &dme);

	area = (dma + dme) / 2;

	printf("A area do losangulo é: %.2f\n\n", area);
	return 0;
}