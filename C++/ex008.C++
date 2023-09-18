#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	float n1,n2,r;
	printf("informe o tempo gasto: ");
	scanf("%f", &n1);

	printf("Digite a velocidade media: ");
	scanf("%f", &n2);

    r=(n1*n2)/12;

    printf("o consumo é de: %.f",r);
}
