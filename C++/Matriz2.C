#include <stdio.h>

#include <stdlib.h>

int main(){

int i;

char palavras[3][30];

//captura palavras

for(i=0;i<3;i++){

printf("Informe palavra %d: ",i+1);

gets(palavras[i]);

}

for(i=0;i<3;i++){
printf("%s", palavras[i]);
}

printf("\n::: Palavras em ordem inversa :::\n");

for(i=2;i>=0;i--)

printf("%s\n",palavras[i]);

return 0;

}