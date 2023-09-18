#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()

{
 int numero[8], i, contador=0, soma=0, soma2=0;
 for(i=0;i<=7;i++)
 {
 printf("\nDigite um valor: ");
 scanf("%d",&numero[i]);
 if(numero[i]>30)
 {
 contador++;
 soma=soma+numero[i];
 }
 }
 for(i=0;i<=7;i++)
 printf("\t%d",numero[i]);
 printf("\n\n %d Numeros maiores que 30",contador);
 printf("\n\n  Soma dos numeros maiores que 30 e = %d",soma);
 for(i=0;i<=7;i++)
 soma2=soma2+numero[i];
 printf("\n\n A Soma dos numeros digitados e = %d",soma2);
 printf("\n\n");

 return(0);

}
