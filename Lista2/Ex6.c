#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
#include <math.h>
int main(void) {

	int l1, l2, l3;
    printf("Informe a razao da PG: ");
    scanf("%i", &l1);
	printf("Informe a razao da PG: ");
    scanf("%i", &l2);
	printf("Informe a razao da PG: ");
    scanf("%i", &l3);

	if(l1 == l2 && l2 == l3){
		printf("Eh um triangulo equilatero");
	}
	else if(l1 == l2 || l2 == l3){
		printf("Eh um triangulo isosceles");
	}
	else{
		printf("Eh um triangulo escaleno");
	}
	return 0;
}