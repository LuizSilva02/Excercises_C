#include<stdlib.h>

#include<stdio.h>



int main(){

  int n1, n2, r, idade, j;

  printf("Digite o ano atual: ");

  scanf("%d", &n1);

  

  printf("informe o ano que nasceu: ");

  scanf("%d", &n2);



  idade = n1 - n2;

  r= n1 - idade;

  j = 18 - idade;

    printf("Sua idade é de = %d",idade);



  if (idade < 18){  

  printf("Você é menor de idade e ainda faltam %d",j);

  }

}