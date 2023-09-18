#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	float n1,n2,n3,r;
	printf("digite o indice do mes 1: ");
	scanf("%f", &n1);

	printf("digite o indice do mes 2: ");
	scanf("%f", &n2);

	printf("digite o indice do mes 3: ");
	scanf("%f", &n3);

	r = (n1+n2+n3)/3;
	printf("A média é de = %.f",r);
	printf(" indice do mes 1: = %.f",n1);
	printf(" indice do mes 2: = %.f",n2);
	printf(" indice do mes 3: = %.f",n3);
}



