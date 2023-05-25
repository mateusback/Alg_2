#include <stdio.h>

int pot(int base, int expo);

int main(void){
    int base = 0, expo = 0;
    printf("Informe a base para calcular a potencia: ");
    scanf("%i", &base);
    printf("Informe o expoente: ");
    scanf("%i", &expo);
    printf("O resultado da potencia eh: %i", pot(base, expo));
    return 0;
}

int pot(int base, int expo){
	int final=1;
	if(expo==0) return final;
	else{ 
		final = base * pot(base,expo-1);
		return final;
	}
}
