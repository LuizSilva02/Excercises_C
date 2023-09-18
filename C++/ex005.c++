#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	int n1,n2,r;
	printf("digite o preço do alcool: ");
	scanf("%i", &n1);

	printf("digite o preço da gasolina: ");
	scanf("%i", &n2);

	r = (n2*0.07);
	printf("Sua gasolina com alcool é de = %.f",r);

	if (n1 <= r){	
	printf("Você deve abastecer com alcool ");
	}
	else{
		printf("Você deve abastecer com gasolina ");
	}
}
