#include<stdlib.h>
#include<stdio.h>

int main(){
    int i, tam=30;
    char nome[tam];

    printf("Digite um nome: ");
    gets(nome);

    for(i=0;i<4;i++){
        printf("Letra %d: \n%c\n", i+1, nome[i]);
    }
    printf("\n\n");

    system("pause");
}