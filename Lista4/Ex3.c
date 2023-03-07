#include <stdio.h>
int main (void){
	int num[8], i;
	for (i = 0; i<8; i++){
		printf("Informe um valor:");
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i<8; i++){
		if(num[i] % 6 == 0){
			printf("%d eh multiplo de 6\n\n", num[i]);
		}
	}
	return 0;
}