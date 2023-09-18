#include <stdlib.h>
#include <stdio.h>

int main(){
	float n1,n2,r;
		
	printf("informe seu peso: ");
	scanf("%f", &n1);
	
	printf("informe sua altura: ");
	scanf("%f", &n2);
	
	
	r= n1/(n2*n2);
		printf("Seu imc é de = %.f",r);
		
	if (r <= 18.5){	
	printf("Você está abaixo do peso %.f",r);
	}
	if (n1>18.5, n1 == 25 ){
		printf("Você está com o peso normal %.f",r);
	}
		if (r >25){
		printf("Acima do peso %.f",r);
	}
	if (r >=30){
		printf("obesidade %.f",r);
	}
}
