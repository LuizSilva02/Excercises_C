#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	int n1,n2,n3, r;
		
	printf("informe o primeiro valor: ");
	scanf("%i", &n1);
	
	printf("informe o segundo valor: ");
	scanf("%i", &n2);
	
	printf("informe o segundo valor: ");
	scanf("%i", &n3);
	
	
	r= (n1+n2+n3)/3;
		printf("A sua média é  = %.i",r);
}
