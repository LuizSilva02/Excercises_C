#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	int n1;
	printf("digite sua idade: ");
	scanf("%i", &n1);
	
	if (n1 < 18){	
	printf("Voc� ainda � menor de idade ");
	}
	if (n1 > 18 ){
		printf("Voc� est� na melhor idade ");
	}
		if (n1 >=65){
		printf("Voc� est� na flor da idade ");
	}

		

}
