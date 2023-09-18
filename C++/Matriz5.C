#include<stdio.h>
#include<stdlib.h>
#include <cstring>

int main(){
    int i;
    char palavras[3][20];

    for(i=0;i<3;i++){

    printf("Informe palavra %d: ",i+1);
    gets(palavras[i]);

}
    for(i=0;i<3;i++){
    printf("%d ", strlen(palavras[i]));
    }
}

//#include<math.h> // permite usar funções matemáticas básicas, tais como senos, cossenos, exponenciais, logarítmos, etc.

//#include <string.h> // funções para manipular strings.


//strlen(nome[x])); // strlen verifica o tamanho da string