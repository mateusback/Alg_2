#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
#include <math.h>
int main(void) {

	int t1, razao, t5;
    printf("Informe a razao da PG: ");
    scanf("%i", &razao);
	printf("Informe o primeiro termo: ");
    scanf("%i", &t1);
	t5 = t1 * pow(razao, 4) ;

	printf("O quinto termo é: %i\n\n", t5);
	return 0;
}