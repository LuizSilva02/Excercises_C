#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	int n1;
	printf("digite sua idade: ");
	scanf("%i", &n1);
	
	if (n1 < 18){	
	printf("Você ainda é menor de idade ");
	}
	if (n1 > 18 ){
		printf("Você está na melhor idade ");
	}
		if (n1 >=65){
		printf("Você está na flor da idade ");
	}

		

}
