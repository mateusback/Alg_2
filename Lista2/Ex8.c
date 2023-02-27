#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
#include <math.h>
int main(void) {

	int n1, n2, n3;
    printf("Informe um numero: ");
    scanf("%i", &n1);
	printf("Informe outro numero: ");
    scanf("%i", &n2);
	printf("Informe mais um numero: ");
    scanf("%i", &n3);
	if(n2>n1 && n2>n3){
		printf("O %i eh maior", n2);
	}
	else if(n3>n1 && n3>n2){
		printf("O %i eh maior", n3);
	}
	else{
		printf("O %i eh maior", n1);
	}
	return 0;
}