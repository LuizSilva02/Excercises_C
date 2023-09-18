#include<stdio.h>
#include <stdlib.h>
#include<locale.h> 


int main(){
    float total, valor;
    int codigo;

    setlocale(LC_ALL,"portuguese");

    printf("\n Informe o valor total da compra ");
    scanf("%f",&total);

    printf("\n Digite seu código:");
    printf("\n 1: Hortifruti  ");
    printf("\n 2: Laticíneos  ");
    printf("\n 3: Carnes    \n");
    printf("\n 4: Peixes    \n");
    printf("\n 5: Aves      \n");
    printf("\n 6: Ovos      \n");
    scanf("%d",&codigo);

    switch(codigo)
      {
        case 1:
        valor=total-(total*0.8); 
          printf("\n valor total a ser pago: %.1f",total);
        break;

        case 2:
          valor=total-(total*0.8); 
          printf("\n valor total a ser pago: %.1f",valor);
        break;

        case 3:
          valor=total-(total*1); 
          printf("\n valor total a ser pago: %.1f",valor);
        break; 

        case 4:
          valor=total-(total*1); 
          printf("\n valor total a ser pago: %.1f",valor);
        break; 

        case 5:
          valor=total-(total*0.9); 
          printf("\n valor total a ser pago: %.1f",valor);
        break; 

        case 6:
          valor=total-(total*0.9); 
          printf("\n valor total a ser pago: %.1f",valor);
        break; 

        default:
          printf("\n opção inválida"); 
   }
 return 0; 
}