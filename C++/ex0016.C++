#include<stdio.h>
#include <stdlib.h>
#include<locale.h> 


int main(){
    float total, valor;
    int codigo;

    setlocale(LC_ALL,"portuguese");

    printf("\n Informe o valor total da compra ");
    scanf("%f",&total);

    printf("\n Digite seu código: ");
    printf("\n 1: cliente comum ");
    printf("\n 2: funcionário ");
    printf("\n 3: cliente vip \n");
    scanf("%d",&codigo);

    switch(codigo)
      {
        case 1:
          printf("\n valor total a ser pago: %.1f",total);
        break;

        case 2:
          valor=total-(total*0.1); 
          printf("\n valor total a ser pago: %.1f",valor);
        break;

        case 3:
          valor=total-(total*0.05); 
          printf("\n valor total a ser pago: %.1f",valor);
        break; 

        default:
          printf("\n opção inválida"); 
   }
 return 0; 
}