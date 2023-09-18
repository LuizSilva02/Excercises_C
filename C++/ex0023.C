#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int meses[] = {31,28,31,30,31,30,31,31,30,31,30,31};
     int dia, mes, ano;
    
    do{
        printf("\nDia:");
        scanf("%d",&dia);
        }while(dia < 1||dia > 31);
        
    do{
        printf("\nMes:");
        scanf("%d", &mes);
        }while(mes <1|| mes >12);
        
    do{
        printf("Ano");
        scanf("%d",&ano);
        }while(ano <1900||ano>2100);
      
    if (ano%4==0 && (ano%400==0||ano%100!=0))
        meses[1] = 29;
    if ((mes < 1 || mes > 12) || (dia < 1 || dia > meses[mes - 1]))
        printf("\nData invalida: ");
        
    else
        printf("\nData Valida: ");
    printf("%02d/%02d/%04d\n\n", dia, mes, ano);
    
}