#include <stdio.h>

int main(void) {
	float salario = 1000, aumento = 1.5/100;
	int i, anoIni = 2017, anoFim = 2010;
	
	for (i = anoIni + 1; i < anoFim; i++) {
		salario = salario + (salario * aumento);
		printf("Salario em %i: %.2f - aumento de %.1f \n", i, salario, aumento*100);
		aumento = 2 * aumento;
	}
	
	printf("Salario final: %.2f", salario);
	
	return 0;
}