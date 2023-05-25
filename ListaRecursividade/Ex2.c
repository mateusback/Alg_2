#include <stdio.h>

int prog(int razao, int posi);

int main(void){
	int razao = 0, posi = 0;
	printf("Informe a razao da progressao aritimetica: ");
	scanf("%i", &razao);
	printf("Informe a posicao final para ser descoberta: ");
	scanf("%i", &posi);
	printf("O resultado alcancado foi: %i",  prog(razao, posi));
	return 0;
}

int prog(int razao, int posi){
	int final=0;
	if(posi==0) return final;
	else{ 
		final = razao + prog(razao,posi-1);
		return final;
	}
}
