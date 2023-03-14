#include <stdio.h>

int main(void){
    int v[9], w[9];
    for(int i = 0; i < 10; i++){
        printf("Informe um numero: ");
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 10; i++){
        w[i] = v[i] * v[i];
        printf("O quadrado de %d eh: %d\n",v[i], w[i]);
    }
    return 0;
}