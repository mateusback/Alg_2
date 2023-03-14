#include <stdio.h>

int main(void){
    int vetor[29], vetorInvertido[29];
    for(int i = 0, j = 29; i < 30; i++, j--){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
        vetorInvertido[j] = vetor[i];
    }
    printf("O vetor invertido ficara da seguinte forma:\n");
    for(int i = 0; i < 30; i++){
        printf("%d\n",vetorInvertido[i]);
    }
    return 0;
}