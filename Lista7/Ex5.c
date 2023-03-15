#include <stdio.h>

int main(void){
    int matrizA[4][4], matrizB[4][4], matrizSoma[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j ++){
            printf("Informe um numero da primeira matriz: ");
            scanf("%d", &matrizA[i][j]);
            printf("Informe um numero da segunda matriz: ");
            scanf("%d", &matrizB[i][j]);
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Segue a Matriz de soma\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j ++){
                printf("%d + %d = %d\n", matrizA[i][j], matrizB[i][j], matrizSoma[i][j]);
        }
    }
        
    return 0;
 }