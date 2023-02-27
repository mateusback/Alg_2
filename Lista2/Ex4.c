#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
#include <math.h>
int main(void) {

	int t1, razao, t10;
    printf("Informe a razao da PA: ");
    scanf("%i", &razao);
	printf("Informe o primeiro termo: ");
    scanf("%i", &t1);
	t10 = t1 + (10 - 1) * razao;

	printf("O decimo termo é: %i\n\n", t10);
	return 0;
}