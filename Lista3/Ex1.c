#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[100];
    printf("Informe uma palavra: ");
    scanf("%s", &palavra);
    int compare = strcmp(palavra, "fim");
        while (compare != 0) {
            printf("Palavra informada: %s\n", palavra);
            scanf("%s", &palavra);
            compare = strcmp(palavra, "fim");
        }
    return 0;
}