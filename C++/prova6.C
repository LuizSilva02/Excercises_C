#include <stdio.h>

#include <stdlib.h>



int main(void){

 int idade, pessoas = 0;

 int sexo;

 float salario, salarios, media;



 float maior_salario = -1;

 int idade_maior_salario = 10;

 char sexo_maior_salario;



 int mulher_salario_ate_800 = 0, homem_salario_ate_800 = 0;



 for (; ;) {

  printf("Digite sua idade (-999 para sair): ");

  scanf("%i", &idade);



  if (idade <= 0) {

   break;

  }



  printf("Sexo (1=M / 2=F): ");

  scanf("%i", &sexo);



  printf("Salario: ");

  scanf("%f", &salario);



  if(salario >= maior_salario) {

   maior_salario = salario;

   idade_maior_salario = idade;

   sexo_maior_salario = sexo;



   if (sexo == 1) {

    sexo_maior_salario = 'M';

   }else if (sexo == 2) {

    sexo_maior_salario = 'F';

   }

  }



  if (salario <= 800) {



   if (sexo == 1) {

    homem_salario_ate_800 += 1;

   }else if (sexo == 2) {

    mulher_salario_ate_800 += 1;

   }

  }



  pessoas += 1;

  salarios += salario;

 }



 media = salarios / pessoas;



 printf("Pessoa com maior salario: idade(%i), sexo(%c)\n", idade_maior_salario, sexo_maior_salario);

 printf("Mulheres com salario ate R$800,00: %i\n", mulher_salario_ate_800);

 printf("Media dos salarios: %.2f\n", media);

 printf("Homens com salario ate R$800,00: %i\n", homem_salario_ate_800);

}