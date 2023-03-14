#include <stdio.h>

int main(void) {
    int vet1[20], vet2[20], aux[20] = {0};
    
    for (int i = 0; i < 20; i++) {
        printf("Digite o %d valor do primeiro vetor: ", i+1);
        scanf("%d", &vet1[i]);
    }

    for (int i = 0; i < 20; i++) {
        printf("Digite o %d valor do segundo vetor: ", i+1);
        scanf("%d", &vet2[i]);
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (vet1[i] == vet2[j]) {
                aux[i] = vet1[i];
            }
        }
    }

    printf("Os valores repitidos foram: \n");
    for (int i = 0; i < 20; i++) {
        if (aux[i] != 0) {
            printf("%d \n", aux[i]);
        }
    }

    return 0;
}