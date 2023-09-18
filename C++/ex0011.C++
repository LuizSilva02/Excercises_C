#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char genero;

    setlocale(LC_ALL,"portuguese");

    printf("Entre com uma letra (M/F): ");
    scanf("%c", &genero);

    switch (genero)
    {
    case 'M':
        printf("Genero masculino");
        break;
    case 'F':
        printf("Genero Feminino");
        break;
    default:

    printf("genero não especificado");
    }
}