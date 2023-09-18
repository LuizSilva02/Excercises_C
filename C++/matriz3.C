#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
int numero[5];

//captura palavras

for(i=0;i<5;i++){
printf("Informe o numero %d: ",i);
scanf("%i", &numero[i]);

}

for(i=0;i<5;i++){
printf("%d", numero[i]);
}

printf("\n::: Palavras em ordem inversa :::\n");
for(i=4;i>=0;i--)
printf("%d\n",numero[i]);
return 0;

}