#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
    int numero = 1;
    int contador;
    
    setlocale(LC_ALL, "Portuguese");

    while (numero != 0)
    {
        printf("Digite um número inteiro e maior que 0, ou digite 0 para terminar. \n");
        scanf("%i", &numero);
        contador = numero + contador;
    }

    printf("O resultado total é: %i", contador);

}