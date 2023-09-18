#include <stdio.h>

int main(){

    int numero, impar = 0;

    for(numero = 200; numero > 100; numero--){
        impar = numero % 2;
        
        if(impar)
            printf("%d", numero);
    }

    return 0;
}