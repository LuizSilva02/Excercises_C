#include <stdlib.h>
#include <stdio.h>

int main(){
	int n1,n2,n3,r,S;
		
	printf("informe o primeiro valor: ");
	scanf("%i", &n1);
	
	printf("informe o segundo valor: ");
	scanf("%i", &n2);
	
	printf("informe o Terceiro valor: ");
	scanf("%i", &n3);
	
	if(n1 == 90|| n2 == 90|| n3 == 90 ){
printf("Triangulo retangulo");
	}
	if(n1 >= 90|| n2 >= 90|| n3 >= 90 ){
printf("Triangulo obtuso");
	}
	if(n1 <= 90|| n2 <= 90|| n3 <= 90 ){
printf("Triangulo Acutangulo");
	}
}
