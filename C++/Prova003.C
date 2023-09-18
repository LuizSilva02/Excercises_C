#include<stdio.h>
#include <stdio.h>
#include<locale.h>


int main(){
float sal_bruto, grat, sal_liq, salario , IR;
setlocale(LC_ALL,"portuguese");


printf("Informe seu salário: ");
scanf("%f",&salario);
printf("Informe se você ganhou gratificação: ");
scanf("%f",&grat);

sal_bruto=salario+grat;

if (sal_bruto<=1000){
    IR=sal_bruto*0.15;
    sal_liq=sal_bruto-IR;
}
else if(sal_bruto>1000){
  IR=sal_bruto*0.20;
  sal_liq=sal_bruto-IR;
}

printf("Seu salario liquido é de: %2.f \n",sal_liq);
}
