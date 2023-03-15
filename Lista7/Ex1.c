#include <stdio.h>

int main(void){
    int matriz[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j ++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Valores da diagonal principal:\n");
    for(int i = 0; i < 10; i++){
        printf("%d\n", matriz[i][i]);
        }
        
    return 0;
 }