#include <stdio.h>

int main(void){
    int matriz[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j ++){
            printf("Informe um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Segue a Matriz\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j ++){
                printf("|%d|", matriz[i][j]);
                if(j == 4){
                printf("\n");
                }
        }
    }
        
    return 0;
 }