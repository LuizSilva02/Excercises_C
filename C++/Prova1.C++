#include <stdio.h>

#include <stdlib.h>

#include<locale.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  

  float ava1,ava2,peso1,peso2,peso3,peso4,ativi,pepe,falta,prova1,prova2,attot,p,total,peso,nota;

  



  printf("Informe a nota da Avaliação 1: \n");

  scanf("%f", &ava1 );



  printf(" o peso da Avaliação 1: \n");

  scanf("%f", &peso1);

  

  printf(" a nota da Avaliação 2: \n");

  scanf("%f", &ava2 );



  printf(" o peso da Avaliação 2: \n");

  scanf("%f", &peso2);

  

  printf(" nota da Atividade de Sala: \n");

  scanf("%f", &ativi );



  printf(" Atividade de Sala: \n");

  scanf("%f", &peso3);

  

  printf(" nota das Preparações Prévias: \n");

  scanf("%f", &pepe );



  printf(" peso das Prepações Prévias: \n");

  scanf("%f", &peso4);

  

  printf(" falta em porcentagem: \n");

  scanf("%f", &falta );

  



  prova1 = ava1 * peso1;



  prova2 = ava2 * peso2;



  attot = ativi * peso3;

  p = pepe * peso4;

  

  peso = peso1 + peso2 + peso3 + peso4;

  nota = prova1+prova2+attot+p;

  total = nota/peso;

  

  if (total >= 7.0 && falta <= 25){

    printf("aprovado sua nota é de: %2.f", total);

  }

  else{

    printf("reprovado sua nota é: %2.f", total);

  }

}