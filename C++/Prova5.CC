#include<stdio.h>

#include <stdio.h>

#include<locale.h>





int main(){

  int dia, mes, ano, diasemana;

  setlocale(LC_ALL,"portuguese");

  

  printf("Digite o dia: ");

  scanf("%i", &dia);

  printf("Digite o mês: ");

  scanf("%i", &mes);

  printf("Digite o ano: ");

  scanf("%i", &ano);

  

  diasemana=(1461*(ano+4800+(mes-14)/12))/4+(367*(mes-2-12*((mes-14)/12)))/12-(3*((ano+4900+(mes-14)/12)/100))/4+dia-32075;

  diasemana=diasemana%7;



 switch(diasemana){

  case 0:

    printf("O dia da semana é Segunda-Feira.");

    break;

  case 1:

    printf("O dia da semana é Terça-Feira.");

    break;

  case 2:

    printf("O dia da semana é Quarta-Feira.");

    break; 

  case 3:

    printf("O dia da semana é Quinta-Feira.");

    break;   

  case 4:

    printf("O dia da semana é Sexta-Feira.");

    break;

  case 5:

    printf("O dia da semana é Sábado.");

    break;        

  case 6:

    printf("O dia da semana é Domingo.");

    break;             

  }



 }