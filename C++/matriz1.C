#include<stdlib.h>
#include<stdio.h>

int main(){
    int i, v[6];
//captura dos elementos
    for(i = 0; i < 6; i++) {
        printf("Elementos [%i]",i);
        scanf("%i", &v[i]);
    }
//Exibir valores digitados
    printf("\n -- valores Digitados --\n");
    for(i = 0; i < 6; i++) {
        printf("%i\n", v[i]);
    }
}