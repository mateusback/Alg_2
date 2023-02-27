#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
#include <math.h>
int main(void) {

	int n1, n2;
    printf("Informe um numero: ");
    scanf("%i", &n1);
	printf("Informe outro numero: ");
    scanf("%i", &n2);

	if(n1>n2){
		printf("O %i eh maior", n1);
	}
	else if(n2>n1){
		printf("O %i eh maior", n2);
	}
	else{
		printf("Os valores sao iguais");
	}
	return 0;
}