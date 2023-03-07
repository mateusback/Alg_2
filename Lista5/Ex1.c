#include <stdio.h>
int main (void){
	int num[3] [3], i, j, mult;
	for (i = 0; i<3; i++){
		for (j = 0; j <3; j++){
			printf("Informe um valor:");
			scanf("%d", &num[i][j]);			
		}
	}
	printf("Informe um valor para multiplicar:");
	scanf("%d", &mult);
	for (i = 0; i<3; i++){
		for (j = 0; j <3; j++){
			num [i] [j] = num [i] [j] * mult;
			printf("Novo valor: %d\n", num[i] [j]);
		}
	}
	return 0;
}