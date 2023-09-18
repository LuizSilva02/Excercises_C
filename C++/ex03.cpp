#include <stdlib.h>
#include <stdio.h>

int main(){
float renda = 0, liquido = 0, resultado = 0;
printf("DIGITE A RENDA MENSAL BRUTA: ");
scanf("%f" , &renda);

if(renda <=1174.86){
	resultado = renda - (renda * 8/100);
	 printf( "O Salario liquido a ser recebido e de: %.2f", resultado);
}
if(renda > 1174.86 ||  1958.10){
	resultado = renda - (renda * 9/100);
	 printf( "O Salario liquido a ser recebido e de: %.2f", resultado);
}
if(renda > 1958.11 ||  3916.20){
	resultado = renda - (renda * 11/100);
	 printf( "O Salario liquido a ser recebido e de: %.2f", resultado);
}
if(renda > 3916.20){
	resultado = renda - 430.78;
	 printf( "O Salario liquido a ser recebido e de: %.2f", resultado);
	}
}
