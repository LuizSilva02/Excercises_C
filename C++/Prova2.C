#include<stdlib.h>

#include<stdio.h>

#include<locale.h>



int main(){

  float P=0, E=0, M=0;

  setlocale(LC_ALL, "portuguese");

  printf("Informe o peso do peixe: ");

  scanf("%f", &P);

  

  E=P-50;

  M=E*4;

  

  if (P>=50){

    printf("\n O excesso de peso é de: %2.f\n ", E);

    printf("O valor da multa é de: %2.f \n", M);}

    

    else{

    printf("Excesso=0, Multa=0 \n ");

    printf("O peso do peixe é de: %2.f kg \n", P);

  }

}