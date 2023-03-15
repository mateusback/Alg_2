#include <stdio.h>

int main(void){
    int matrizA[3][4], matrizB[3][4];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j ++){
            printf("Informe um numero: ");
            scanf("%d", &matrizA[i][j]);
            matrizB[i][j] = matrizA[i][j] * 3;
        }
    }

    printf("Segue a Matriz\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j ++){
                printf("%d\n",  matrizB[i][j]);
        }
    }
        
    return 0;
 }