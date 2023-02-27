#include <stdio.h> //Biblioteca do print
#include <conio.h> //Biblioteca do scan
int main(void) {

	float salariom, salariof;
	int reajuste;

    printf("Informe o salario mensal: ");
    scanf("%f", &salariom);
	printf("Informe o reajuste: ");
    scanf("%i", &reajuste); //Precisa atribuir o valor da var como inteiro(%i)
	salariof = salariom + salariom *(reajuste/100.00);

	printf("Salario final: %.2f\n\n", salariof);
	return 0;
}