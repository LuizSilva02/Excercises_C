#include<stdio.h>
#include <stdlib.h>
#include<locale.h> 

{
  float v1,v2;
  int opcao;
  setlocale(LC_ALL,"portuguese");

printf("\n\t Operação entre 2 valores\n");
printf("\n Digite o primeiro valor: ");
scanf("%f",&v1);
printf("\n Digite o segundo valor: ");
scanf("%f",&v2);

printf("\n Qual operação deseja fazer:\n");
printf("Digite 1: soma\n");
printf("Digite 2: subtração\n");
printf("Digite 3: divisão\n");
printf("Digite 4: multiplicação\n");
scanf("%d",&opcao);

switch(opcao)
     {
      case 1:
        printf(" %.1f + %.1f = %.1f ",v1,v2,(v1+v2));
      break;

      case 2:
        printf(" %.1f - %.1f = %.1f ",v1,v2,(v1-v2));
      break;

      case 3:
       printf("%.1f : %.1f = %.1f",v1,v2,(v1/v2));
      break;

      case 4:
       printf("%.1f * %.1f = %.1f",v1,v2,(v1*v2));
      break;  

      default:
       printf("\n opção invalida"); 
  } 
  return 0; 
}

  
